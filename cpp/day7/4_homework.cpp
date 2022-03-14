#include <iostream>
using namespace std;

void print_revers_array(int arr[], int n);

int main() {
    const int n = 10;
    int arr[n];
    cout << "Input:\n";
    for (int i = 0; i < n; i ++) {
        arr[i] = rand() % 9 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Output:\n";
    print_revers_array(arr, n);
    return 0;
}
void print_revers_array (int arr[], int n) {
    int *next = arr + n - 1;
    while (next > arr - 1) {
        cout << *next << " ";
        next --;
    }
    cout << endl;
}
