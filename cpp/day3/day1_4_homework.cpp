#include <iostream>
using namespace std;
int fermer (int, int, int);
int main () {
    int chickens;
    cout << "Enter the number of chickens." << endl;
    cin >> chickens;
    int cows;
    cout << "Enter the number of cows." << endl;
    cin >> cows;
    int pigs;
    cout << "Enter the number of pigs." << endl;
    cin >> pigs;
    int result = fermer (chickens, cows, pigs);
    cout << "The result is " << result << "." << endl;
	return 0;
}
int fermer (int chickens, int cows, int pigs){
    return 2 * chickens + 4 * cows + 4 * pigs;
}
