#include <iostream>
#include "list.h"

using namespace std;

List ::List(){
  _head = nullptr;
  _curr = nullptr;
  _temp = nullptr;
}

void List::remove(int delData){
  Node* delPtr = nullptr;
  _temp = _head;
  _curr = _head;
  while(_curr != nullptr && _curr->_data != delData){
    _temp = _curr;
    _curr = _curr->_next;
  }
  if(_curr == nullptr){
    cout << delData << " was not in the list." << endl;
    delete delPtr;
  } else{
    delPtr = _curr;
    _curr = _curr->_next;
    _temp->_next = _curr;
    delete delPtr;
    _count --;
    cout << "The value " << delData << " was deleted!" << endl;
  }
}
void List::add(int new_data){
  Node *node = new Node();
  node->_data = new_data;
  node->_next = nullptr;

  if(_head != nullptr){
    _curr = _head;
    while(_curr->_next != nullptr){
      _curr = _curr->_next;
    }
    _curr->_next = node;
  } else{
    _head = node;
  }
  _count ++;
}

void List::addFront(int new_data){
  _head = new Node(new_data, _head);
  _count ++;
}

void List::add(int new_data, int index){
  Node *node = this->_head;

  if(!index){
    addFront(new_data);
    return;
  }

  while(index - 1 > 0){
    node = node->_next;
    index --;
  }

  Node* newNode = new Node(new_data, node->_next);
  node->_next = newNode;

  _count ++;
}

void List::display(){
  _curr = _head;
  while(_curr != nullptr){
    cout << _curr->_data << endl;
    _curr = _curr->_next;
  }
}

bool List::isEmpty() {
  return _count == 0;
}

int List::getElement(int index) {
  Node *node = this->_head;
  while(index > 0){
    node = node->_next;
    index --;
  }
  return node->_data;
}

void List::removeAt(int index) {
  Node* node = this->_head;

  if(index == 0){
    _head = _head->_next;
    delete node;
    _count --;
    return;
  }

  while(index - 1 > 0){
    node = node->_next;
    index --;
  }

  Node* newNode = node->_next;
  node->_next = newNode->_next;

  delete newNode;

  _count --;
}