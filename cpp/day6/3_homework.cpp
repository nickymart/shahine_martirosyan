#include <iostream>
#include <math.h>

using namespace std;
int main () {
    int arr[10] = {0};
    for (int i = 0; i < 10; i++) {
        arr[i] = 5 * pow(i + 1, 2);
        cout << 2 * (i + 1) << "*" <<2 * (i + 1)  << " + " << (i + 1) << "*"  << (i + 1)<< " = " << arr[i] << endl;
    }
    return 0;    
}
