#include "binary.hpp"
#include <iostream>
#include <vector>

using namespace std;

void inputMatrix(bool** arr, int n);
void printMatrix(bool** arr, int n);
int dfs(vector<Node*>, bool**, int, bool*, int);
bool isTree(vector<Node*>, bool** arr, int n);

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    bool** arr = new bool*[n];
    vector<Node*> tree(n);
    for (int i = 0; i < n; i++) {
        tree[i] = new Node(i);
    }
    inputMatrix(arr, n);
    if (isTree(tree, arr, n)) {
        cout << "true\n";
        for (int i = 0; i < n; i++) {
            cout << tree[i]->_data << " --> ";
            if (tree[i]->_left) {
                cout << tree[i]->_left->_data << " ";
            }
            if (tree[i]->_right) {
                cout << tree[i]->_right->_data;
            }
            cout << endl;
        }
    } else {
        cout << "false\n";
        tree = vector<Node*>();
    }    
    return 0;
}

int dfs(vector<Node*> tree, bool** arr, int n, bool* is_visited, int v) {
    int number_of_vertices_visited = 1;
    is_visited[v] = true;
    for (int i = 0; i < n; i++) {
        if (arr[v][i] && !is_visited[i]) {
            if (!tree[v]->_left) {
                tree[v]->_left = tree[i];
            } else {
                tree[v]->_right = tree[i];
            }
            number_of_vertices_visited += dfs(tree, arr, n, is_visited, i);
        }
    }
    return number_of_vertices_visited;
}

bool isTree(vector<Node*> tree, bool** arr, int n) {
    int root = -1;
    for (int i = 0; i < n; i++) {
        int number_of_in_edges = 0;
        int number_of_out_edges = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j]) {
                number_of_out_edges++;
            }
            if (arr[j][i]) {
                number_of_in_edges++;
            }
        }
        if(number_of_in_edges == 0 && number_of_out_edges <= 2) {
            root = i;
            break;
        }
    }
    bool is_visited[n] = {};
    int number_of_edges = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j]) {
                number_of_edges++;
            }
        }
    }

    return (root != -1 && dfs(tree, arr, n, is_visited, root) == n && number_of_edges == n - 1);
}

void inputMatrix(bool** arr, int n) {
    cout << " ";
    for (int i = 0; i < n; i++) {
        cout << " " << i;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        arr[i] = new bool[n];
        cout << i << " ";
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
}

void printMatrix(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
    }
}