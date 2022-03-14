#include <iostream>
using namespace std;

void findMinAndMaxElementsOfArray(int arr[], int n, int *min, int *max);
int main() {
    const int n = 10;
    int arr[n];
    cout << "Input:\n";
    for (int i = 0; i < n; i ++) {
        arr[i] = rand() % 9 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    int m1 = 0, m2 = 0;
    int *min = &m1, *max = &m2;
    findMinAndMaxElementsOfArray(arr, n, min, max);
    cout << "min:"<< *min << " \n" <<"max:" << *max << endl;
    return 0;
}
void findMinAndMaxElementsOfArray (int arr[], int n, int *min, int *max) {
    int *next = arr + n - 1;
    *min = *next;
    *max = *next;
    while (next > arr - 1) {
        if (*min > *next) {
            *min = *next;
        }
        if (*max < *next) {
            *max = *next;    
        }
        next --;
    }
}
