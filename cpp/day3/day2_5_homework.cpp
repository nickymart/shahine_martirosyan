#include <iostream>
using namespace std;

void tree(int);
int main()
{
    int size;
    cout << "Input a number:";
    cin >> size;
    tree(size);
    return 0;
}
void tree(int size) {
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
    i = 1;
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
    i = 1;
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
    i = 1;
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
    i = 1;
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
