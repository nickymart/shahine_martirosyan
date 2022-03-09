#include <iostream>
using namespace std;

void opposite(int arr[], int);
void print(int arr[], int);
void input(int arr[], int);
int main() {
    int n;
    cout << "Input array lenght" <<endl;
    cin >> n;
	int arr[n];
	input(arr, n);
	print(arr,n);
	opposite(arr, n);
	print(arr,n);
	return 0;
}

void opposite(int arr[], int n) {   
    int temp;
	for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void input(int arr[], int n) {
    for ( int i = 0; i < n; i++)
        arr[i] = rand() % 100;;
    cout << endl;
}
