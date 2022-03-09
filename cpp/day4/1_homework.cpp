#include <iostream>
#include <math.h>
using namespace std;

int binary(int);
int main() {
    int n;
    do {
        cout << "Enter your number:";
        cin >> n;
    } while (n < 0);
    cout << binary(n) << endl;
    return 0;
}
int binary(int n) {
    int result = 0;
    int i = 0;
    while(n) {
        result += (n % 2) * pow(10, i);
        n /= 2;
        i ++;
    }
    return result;
}

