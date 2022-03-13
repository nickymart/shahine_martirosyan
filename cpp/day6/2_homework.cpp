#include <iostream>
using namespace std;

int main () {
    const int m = 5, n = 6;
    int matrix[m][n];
    cout << "Input:" << endl; 
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            matrix[i][j] = rand() % 10;
            cout << matrix[i][j] << " ";
        }    
        cout <<endl;
    } 
    int min_index, max_index;
    int elem;
    for(int i = 0; i < m; i ++){
        min_index = i;
        max_index = i;
        for(int j = 0; j < n; j ++){
            if(matrix[i][min_index] > matrix[i][j]){
                min_index = j;    
            }
            if(matrix[i][max_index] < matrix[i][j]){
                max_index = j;    
            }
        }    
        elem = matrix[i][min_index];
        matrix[i][min_index] = matrix[i][max_index];
        matrix[i][max_index] = elem;
    }
    cout << "Output:" << endl;
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            cout << matrix[i][j] << " ";
        }    
        cout <<endl;
    }  
    return 0;    
}

