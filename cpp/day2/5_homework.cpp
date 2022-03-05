#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Input a number:";
    cin >> size;
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
        while (j <= size - i) {
            cout << " ";
            j ++;
        }
        j = 1;
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
        while (j <= i - 1) {
            cout << " ";
            j ++;
        }
        j = 1;
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
        while (j <= size - i) {
            cout << " ";
            j ++;
        }
        j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j ++;
        }
        cout << endl;
        i ++;
    }
    return 0;
}

