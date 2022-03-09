#include <iostream>
using namespace std;

void tree1(int);
void tree2(int);
void tree3(int);
void tree4(int);
void tree5(int);
int main()
{
    int size;
    cout << "Input a number:";
    cin >> size;
    tree1(size);
    tree2(size);
    tree3(size);
    tree4(size);
    tree5(size);
    return 0;
}
void tree1(int size) {
    int i = 1;
    while (i <= size) {
        int j = 1;
        while (j <= i) {
            cout << "*";
            j ++;
        }
        cout << endl;
        i ++;
    }
    cout << endl;
}
void tree2(int size) {
    int i = 1;
    while (i <= size) {
        int j = 1;
        while (j <= size) {
            if ( j <= size - i) {
                cout << " ";
            } else {
                cout << "*";
            }
            j ++;
        }
        cout << endl;
        i ++;
    }
    cout << endl;
}
void tree3(int size) {
    int i = 1;
    while (i <= size) {
        int j = 1;
        while (j <= size - i + 1) {
            cout << "*";
            j ++;
        }
        cout << endl;
        i ++;
    }
    cout << endl;
}
void tree4(int size) {
    int i = 1;
    while (i <= size) {
        int j = 1;
        while (j <= size) {
            if (j <= i - 1) {
                cout << " ";
            } else {
                cout << "*";
            }
            j ++;
        }
        cout << endl;
        i ++;
    }
    cout << endl;
}
void tree5(int size) {
    int i = 1;
    while (i <= size) {
        int j = 1;
        while (j <= 2 * size) {
            if (j <= size - i || j >= size + i) {
                cout << " ";
            } else {
                cout << "*";
            }
            j ++;
        }
        cout << endl;
        i ++;
    }
}
