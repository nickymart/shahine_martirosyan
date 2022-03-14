#include <iostream>
using namespace std;

void swap(int *num1, int *num2);

int main() {
    int  num1, num2;
    cout << "num1:";
    cin >> num1;
    cout << "num2:";
    cin >> num2;
    
    int *ptr1 = &num1; 
    int *ptr2 = &num2; 
    swap(ptr1, ptr2);
    cout << "num1:" << *ptr1 << " \n" << "num2:" << *ptr2 << endl;
    return 0;
}
void swap (int *num1, int *num2) {
    int elem = *num1;
    *num1 = *num2;
    *num2 = elem;
}
