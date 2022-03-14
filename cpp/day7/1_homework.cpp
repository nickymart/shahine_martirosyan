#include <iostream>
using namespace std;

void sum1(int *a, int *b, int *sum);
void sum2(int &a, int &b, int &sum);
void sum3(int a, int b, int &sum);
void sum4(int a, int *b, int &sum);
void sum5(int *a, int *b, int &sum);

int main()
{
    int  num1, num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    
    int *summ1;
    int *ptr1 = &num1; 
    int *ptr2 = &num2; 
    sum1(ptr1, ptr2, summ1);
    cout << "sum1:" << *summ1 << endl;
    
    int sum;
    int &ref1 = num1;
    int &ref2 = num2;
    int &summ2 = sum;
    sum2(ref1, ref2, summ2);
    cout << "sum2:" << summ2 << endl;
    
    int &summ3 = sum;
    sum3(num1, num2, summ3);
    cout << "sum3:" << summ3  << endl;
    
    int &summ4 = sum;
    sum4(num1, ptr2, summ4);
    cout << "sum4:" << summ4 << endl;
    
    int &summ5 = sum;
    sum5(ptr1, ptr2, summ4);
    cout << "sum5:" << summ5 << endl;
    return 0;
}
void sum1(int *a, int *b, int *sum){
    *sum = *a + *b;    
}
void sum2(int &a, int &b, int &sum){
    sum = a + b;
}
void sum3(int a, int b, int &sum){
    sum = a + b;    
}
void sum4(int a, int *b, int &sum){
    sum = a + *b;    
}
void sum5(int *a, int *b, int &sum){
    sum = *a + *b;
}
