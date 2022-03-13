#include <iostream>
using namespace std;

int main () {
    const int m = 5, n = 4;
    int matrix[m][n];
    cout << "Input:" << endl; 
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            cin >> matrix[i][j];
        }    
    }  
    int index = -1;;
    bool b = true;
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            if (matrix[i][j] % 2 != 0) {
                b = false;
            }
        }    
        if (b) {
            index = i;
            break;
        }
        b = true;
    }
    if (index == -1) {
        cout << "No";
        return 0;
    }
    cout << "Output:" << endl;
    for (int i = 0; i < n; i ++) {
        cout << matrix[index][i]<< " ";
    }  
    return 0;    
}
