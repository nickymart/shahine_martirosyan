#include <iostream>
using namespace std;
void multiplication_table (int n);
int main () {
    int n;
    do {
        cout << "Enter your number:";
        cin >> n;
    } while(n <= 0 || n >=11);
    multiplication_table(n);
    return 0;    
}
void multiplication_table (int n) {
    int i = 1;
    while (i <= 10) {
        cout << n << " * " << i << " = " << n * i << endl;
        i ++;
    }
}
