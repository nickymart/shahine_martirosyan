#include <iostream>
using namespace std;
int factorial (int);
int main () {
        int n;
        do {
            cout << "Enter your number." << endl;
            cin >> n;
        } while(n < 0);
        int res = factorial(n);
        cout << "The factorial of " << n << " is " << res << "." << endl; 
        return 0;
}
int factorial (int n) {
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}
