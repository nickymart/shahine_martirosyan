#include <iostream>
using namespace std;
void leap_year ();
int main () {
    leap_year ();
    return 0;
}
void leap_year () {
    int i = 2024;
    while (i <= (2024 + 4 * 19) ) {
        cout << i << endl;
        i += 4;
    }
}
