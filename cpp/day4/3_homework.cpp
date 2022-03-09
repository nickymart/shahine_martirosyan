#include <iostream>
using namespace std;

int largest(int arr[], int);
void print(int arr[], int);
void input(int arr[], int);
int main()
{
    int n;
    cout << "Input array lenght" <<endl;
    cin >> n;
	int arr[n];
	input(arr, n);
	print(arr,n);
	cout << largest(arr, n);
	return 0;
}

int largest(int arr[], int n)
{
	int i;
	int max = arr[0];
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
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
