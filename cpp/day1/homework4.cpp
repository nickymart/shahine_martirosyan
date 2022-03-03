#include <iostream>
using namespace std;

int main () {
        int chickens;
        cout << "Enter the number of chickens" << endl;
        cin >> chickens;
        int cows;
        cout << "Enter the number of cows" << endl;
        cin >> cows;
        int pigs;
        cout << "Enter the number of pigs" << endl;
        cin >> pigs;
        int result = 2 * chickens + 4 * cows + 4 * pigs;
        cout << "The result is : " << result << endl;
	return 0;
}
