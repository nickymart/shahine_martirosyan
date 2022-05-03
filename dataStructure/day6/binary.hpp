#ifndef __BINARY_H__
#define __BINARY_H__

#include <iostream>
#include <queue>

using namespace std;

class Tree {
public:
    int _data;
    Tree* _left_tree;
    Tree* _right_tree;

    Tree() {
        _left_tree  = nullptr;
        _right_tree = nullptr;
    }

    Tree(int data) {
        _data = data;
        _left_tree  = nullptr;
        _right_tree = nullptr;
    }

    void insert(int);
    bool isExist(int);
    void bfs();
    int max();
    int min();
};

bool Tree::isExist(int data) {
    if(_data == data){
        return true;
    } else if (_data > data) {
        if (_left_tree) {
            return _left_tree->isExist(data);
        } else {
            return false;
        }
    } else {
        if (_right_tree) {
           return _right_tree->isExist(data);
        } else {
            return false;
        }
    }
}

void Tree::insert(int data) {
    if (_data > data) {
        if (_left_tree) {
            _left_tree->insert(data);
        } else {
            _left_tree = new Tree(data);
        }
    } else {
        if (_right_tree) {
            _right_tree->insert(data);
        } else {
            _right_tree = new Tree(data);
        }
    }
}

int Tree::max() {
    Tree* temporary_tree = this;
    while (temporary_tree->_right_tree) {
        temporary_tree = temporary_tree->_right_tree;
    }
    return temporary_tree->_data;
}

int Tree::min() {
    Tree* temporary_tree = this;
    while (temporary_tree->_left_tree) {
        temporary_tree = temporary_tree->_left_tree;
    }
    return temporary_tree->_data;
}

void Tree::bfs() {
    queue<Tree*> q;
    cout << _data << " ";
    q.push(this);
    while (!q.empty()) {
        Tree* cur_tree = q.front();
        q.pop();
        Tree* left = cur_tree->_left_tree;
        Tree* right = cur_tree->_right_tree;
        if (left) {
            cout << left->_data << " ";
            q.push(left);
        }
        if (right) {
            cout << right->_data << " ";
            q.push(right);
        }
    }
}

#endif // __BINARY_H__