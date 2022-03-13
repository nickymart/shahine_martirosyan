#include <iostream>
using namespace std;

void space(int i);
int count(int n);
int main () {
    const int  n = 10;
    int matrix1[n][n];
    int matrix2[n][n];
    int matrix[n][n];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            matrix1[i][j] = rand() % 10 + 1;
            cout << matrix1[i][j] ;
            space(3 - count(matrix1[i][j]) + 1);
        }    
        cout << endl;
    } 
    cout << "+" << endl;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            matrix2[i][j] = rand() % 10 + 1;
            cout << matrix2[i][j] ;
            space(3 - count(matrix2[i][j]) + 1);
        }    
        cout << endl;
    } 
    cout << "=" << endl;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << matrix[i][j] ;
            space(3 - count(matrix[i][j]) + 1);
        }    
        cout << endl;
    }
    return 0;    
}
void space(int i) {
    while (i--) {
        cout << " ";
    }
}
int count(int n) {
    int i = 1;
    while(n){
        i ++;
        n /= 10; 
    }
    return i;
}
