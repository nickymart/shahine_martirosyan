#include <iostream>
using namespace std; 

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
 int main( ) {
    const int size = 20;
    int matrix[size][size] = {0};
    for (int i = 0; i < size; i++){
        for (int j = i; j < size - i; j++) {
            if(j == 0){
                matrix[i][j] += 1;
            } else {
                matrix[i][j] = matrix[i][j - 1] + 1;
            }
        }
        for (int j = i + 1; j < size - i ; j ++) {
            matrix[j][size - i - 1] = matrix[j - 1][size - i - 1] + 1;
        }
        for(int j = size - i - 2; j >= i; j --){
            matrix[size - i - 1][j] = matrix[size - i - 1][j + 1] + 1;      
        }
        for(int j = size - i - 2; j > i; j --){
            matrix[j][i] = matrix[j + 1][i] + 1;  
        }
    }
    for (int i = 0; i < size; i ++){
        for (int j = 0; j < size; j ++){
            cout << matrix[i][j] ;
            space(count(size * size) - count(matrix[i][j]) + 1);
        }    
        cout << endl;
    }
    return 0;
 }
