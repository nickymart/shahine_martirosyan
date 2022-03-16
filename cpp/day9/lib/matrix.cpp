#include <iostream>
#include "matrix.h"

using namespace std;

void print_matrix(int** matrix, int width = 10, int height = 10) {
        for (int** i = matrix; i < matrix + height; i++) {
                for (int* j = *i; j < *i + width; j++) {
                        cout << *j << " ";
                }
               cout << endl;
        }
}
void input_matrix(int** matrix, int width = 10, int height = 10) {
        for (int** i = matrix; i < matrix + height; i++) {
		*i = new int[width];
                for (int* j = *i; j < *i + width; j++) {
                	*j = rand() % 9 + 1 ; 
			cout << *j << " ";
		}
		cout << endl;
        }
}
void sort_matrix(int** matrix, int width = 10, int height = 10) {
        int elem;
        for (int** i = matrix; i < matrix + height; i++) {
                for (int* j = *i ; j < *i + width - 1; j++) {
                        for (int* k = j + 1; k < *i + width; k++) {
                                if (*k < *j) {
                                        elem = *k; 
                                        *k = *j; 
                                        *j = elem;
                                }
                        }
                }
        }
}
