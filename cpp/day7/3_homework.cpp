#include <iostream>
using namespace std;

void sum_of_array_elements(int arr[], int n, int *sum);

int main() {
    const int n = 10;
    int arr[n];
    for (int i = 0; i < 10; i ++) {
        arr[i] = rand() % 9 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    int s = 0;
    int *sum = &s;
    sum_of_array_elements(arr, n, sum);
    cout << *sum << endl;
    return 0;
}
void sum_of_array_elements (int arr[], int n, int *sum) {
    int *next = arr;
    while (next < arr + n) {
        *sum += *next;
        next ++;
    }
}
