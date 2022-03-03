#include <iostream>
using namespace std;

int main () {
        int n;
        cout << "Enter your number" << endl;
        cin >> n;
        int i = 1;
        int result = 1;
        while (i <= n) {
            result *= i;
            i ++;
        }
        cout << "The factorial of " << n << " is " << result << endl; 
        return 0;
}
