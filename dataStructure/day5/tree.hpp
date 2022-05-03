#ifndef TREE_H
#define TREE_H

#include <queue>
#include <iostream>
#include <limits>

using namespace std;

const int PINF = numeric_limits<int>::max();
const int MINF = numeric_limits<int>::min();

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
    int sum();
    int max();
    int min();
    void dfs();
    void bfs();
};

void Tree::insert(int data){
    queue<Tree*> q;
    q.push(this);
    while (!q.empty()) {
        Tree* cur_tree = q.front();
        q.pop();
        if (!cur_tree->_left_tree) {
            cur_tree->_left_tree = new Tree(data);
            return;
        } else {
            q.push(cur_tree->_left_tree);
        }
        if (!cur_tree->_right_tree) {
            cur_tree->_right_tree = new Tree(data);
            return;
        } else {
            q.push(cur_tree->_right_tree);
        }
    }
}

int Tree::sum(){
    int answer = _data;
    if (_left_tree) {
        answer += _left_tree->sum();
    }
    if (_right_tree) {
        answer += _right_tree->sum();
    }
    return answer;
}

int Tree::min(){
    int answer = _data;
    if (_left_tree) {
        answer = std::min(answer, _left_tree->min());
    }
    if (_right_tree) {
        answer = std::min(answer, _right_tree->min());
    }
    return answer;
}

int Tree::max(){
    int answer = _data;
    if (_left_tree) {
        answer = std::max(answer, _left_tree->max());
    }
    if (_right_tree) {
        answer = std::max(answer, _right_tree->max());
    }
    return answer;
}

void Tree::dfs() {
    if (this) {
        cout << _data << " ";
        _left_tree->dfs();
       _right_tree->dfs();
    }
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

#endif