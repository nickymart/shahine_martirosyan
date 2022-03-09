#include <iostream>
using namespace std;

bool is_perfect_number(int);
int main() {
    int n;
    do {
        cout << "Enter your number:";
        cin >> n;
    } while (n < 0);
    if(is_perfect_number(n))
        cout << "It's perfect" << endl;
    else
        cout << "It's not perfect" << endl;
    return 0;
}
bool is_perfect_number(int n) {
    int num = 0;
    for(int i = 1; i <= n / 2; i ++) {
        if(n % i == 0)
            num += i;
    }
    if(num == n)
        return true;
    return false;
}

