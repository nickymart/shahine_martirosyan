#include <iostream>
using namespace std;

int main () {
    int arr[10] = {0};
    int i = 0;
    for (int k = 1; i < 10; k ++) {
        if ((1 +  k * k) % 5 == 0) {
            arr[i] = 1 +  k * k;
            cout << arr[i] << " ";
            i++;
        }
    }
    cout << endl;
    return 0;    
}
