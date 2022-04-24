#ifndef LIST_H
#define LIST_H

struct Node{
  int _data;
  Node* _next;

  Node() {
      _data = 0;
      _next = nullptr;
  };
  Node(int data, Node* next){
    _data = data;
    _next = next;
  }
};

class List {

private:
  Node* _head;
  Node* _curr;
  Node* _temp;

public:
  List();

  int _count = 0;
  int operator [](int);

  void add(int, int);
  void add(int);
  void addFront(int);
  void remove(int);
  void removeAt(int);
  int getElement(int);
  void display();


  bool isEmpty();
};
#endif