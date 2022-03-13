#include <iostream>
using namespace std;

int main () {
    int arr[10] = {0};
    int e = 0;
    for (int k = 5; e < 10; k += 5) {
        //cout << k << " ";
        for(int i = 1; i < k; i ++){
            
            for(int j = i + 1; j < k; j ++){
                if(k * k == j * j + i * i){
                    arr[e] = j * j + i * i;
                    cout << i * i << "+" << j * j << "=" << arr[e] << endl;
                    e ++;
                }
            }
        }
    }
    cout << endl;
    return 0;    
}
