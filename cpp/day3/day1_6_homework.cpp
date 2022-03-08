#include <iostream>
using namespace std;
int factorial (int);
int main () {
        int n;
        cout << "Enter your number." << endl;
        cin >> n;
        int res = factorial(n);
        cout << "The factorial of " << n << " is " << res << "." << endl; 
        return 0;
}
int factorial (int n) {
    if(n == 1)
        return 1;
    return n * factorial(n - 1);
}
