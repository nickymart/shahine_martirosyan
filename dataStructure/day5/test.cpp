#include <iostream>
#include "tree.hpp"

using namespace std;

int main(){

    Tree* tree = new Tree(1);

    for (int i = 2; i < 32; i++) {
        tree->insert(i);
    }

    cout << tree->sum() << endl;
    cout << tree->max() << endl;
    cout << tree->min() << endl;

    tree->dfs();
    cout << endl;
    tree->bfs();

    return 0;
}
