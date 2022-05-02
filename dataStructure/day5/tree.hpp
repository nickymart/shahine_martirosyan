#ifndef TREE_H
#define TREE_H

#include <iostream>

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
};

void insert(Tree* tree, int data){

    if (!tree->_left_tree) {
        tree->_left_tree->_data = data;
    }
    else {
        insert(tree->_left_tree, data);
    }
    if (!tree->_right_tree) {
        tree->_right_tree->_data = data;
    } 
    else {
        insert(tree->_right_tree, data);
    }
}

int sum(Tree* tree, int _sum = 0){
    if (tree) {
        _sum = tree->_data;
        _sum +=  sum(tree->_left_tree, 0);
        _sum += sum(tree->_right_tree, 0);
    }
    return _sum;
}

int max(Tree* tree, int _max){
    if(tree){
        if(_max < tree->_data){
            _max = tree->_data;
        }
        _max = max(tree->_left_tree, _max);
        _max = max(tree->_right_tree, _max);
    }
    return _max;
}

int min(Tree* tree, int _min){
    if(tree){
        if(_min > tree->_data){
            _min = tree->_data;
        }
        _min = min(tree->_left_tree, _min);
        _min = min(tree->_right_tree, _min);
    }
    return _min;
}

void dfs(Tree* tree) {
    if (tree) {
        cout << tree->_data << " ";
        dfs(tree->_left_tree);
        dfs(tree->_right_tree);
    }
}

void bfs_(Tree* tree) {
    if (tree) {
        if (tree->_left_tree) {
            cout << tree->_left_tree->_data << " ";
        }
        if (tree->_right_tree) {
            cout << tree->_right_tree->_data << " ";
        }
        bfs_(tree->_left_tree);
        bfs_(tree->_right_tree);
    }
}

void bfs(Tree* tree) {
    if (tree) {
        cout << tree->_data << " ";
        bfs_(tree);
    }
}

#endif
