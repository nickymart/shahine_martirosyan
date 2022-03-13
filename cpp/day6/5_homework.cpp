#include <iostream>
using namespace std;

int main () {
    const int  n = 4;
    int matrix1[n][n];
    int matrix2[n][n];
    int matrix[n][n];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            matrix1[i][j] = rand() % 11;
            cout << matrix1[i][j] << " ";
        }    
        cout << endl;
    } 
    cout << "+" << endl;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            matrix2[i][j] = rand() % 11;
            cout << matrix2[i][j] <<  " ";
        }    
        cout << endl;
    } 
    cout << "=" << endl;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << matrix[i][j] << " ";
        }    
        cout << endl;
    }
    return 0;    
}
