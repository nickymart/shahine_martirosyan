#include <iostream>
#include "tree.hpp"

using namespace std;

int main(){

    Tree* tree = new Tree(2);

    tree->_left_tree = new Tree(3);
    tree->_right_tree = new Tree(4);

    tree->_left_tree->_left_tree = new Tree(5);
    tree->_left_tree->_right_tree = new Tree(6);

    cout << max(tree, tree->_data) << endl;
    cout << min(tree, tree->_data) << endl;
    cout << sum(tree) << endl;

    return 0;
}
