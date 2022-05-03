#include "binary.hpp"

int main() {
    Tree* tree = new Tree(10);
    for (int i = 1; i <= 20; i++) {
        tree->insert(i);
    }

    tree->bfs();
    cout << endl;

    cout << tree->min() << endl;
    cout << tree->max() << endl;

    cout << tree->isExist(20) << endl;
    cout << tree->isExist(320) << endl;

    return 0;
}
