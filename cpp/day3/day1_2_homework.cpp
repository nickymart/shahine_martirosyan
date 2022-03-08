#include <iostream>
using namespace std;
void multiplication_table (int n);
int main () {
    int n;
    cout << "Enter your number:";
    cin >> n;
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
