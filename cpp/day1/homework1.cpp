#include <iostream>
using namespace std;

int main () {
	int num;
	cout << "Enter your number:" << endl;
	cin >> num;
	int n;
	cout << "Enter a number from 1 to 100 \n";
	cin >> n;
	if (n == num) {
		cout << "You are right! \n" ;
	} else {
		do {
			if (n < num) {
				cout << "Enter a larger number." << endl;
			} else {
				cout << "Enter a smaller number." << endl;
			}
			cin >> n;
		} while (n != num);
		cout << "You are right!" << endl;
	}
	return 0;	
}
