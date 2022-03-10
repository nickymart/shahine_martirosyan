#include <iostream>
using namespace std;

void sort(int arr[], int);
void print(int arr[], int);
void input(int arr[], int);
int main() {
    int n;
    cout << "Input array lenght:";
    cin >> n;
	int arr[n];
	input(arr, n);
	print(arr, n);
	sort(arr, n);
	print(arr, n);
	return 0;
}

void sort(int arr[], int n) {   
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void input(int arr[], int n) {
    for ( int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}
