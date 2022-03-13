#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int arr[10] = {0};
    //int elem = 5;
    int i = 0;
    for(int k = 1; i < 10; k ++){
        if((1 +  k * k) % 5 == 0){
            arr[i] = 1 +  k * k;
            i++;
        }
    } 
    for(int i = 0; i < 10; i ++){
         cout << arr[i] << "  ";    
    }
    return 0;    
}

