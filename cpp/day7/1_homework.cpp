#include <iostream>
using namespace std;

void sum1(int *, int *, int *);
void sum2(int &, int &, int &);
void sum3(int , int , int &);
void sum4(int , int *, int &);
void sum5(int *, int *, int &);

int main() {
    int  num1 = 10, num2 = 15;
    cout << "num1:" << num1 << endl;
    cout << "num2:" << num2 << endl;
    int sum;
    
    sum1(&num1, &num2, &sum);
    cout << "sum1:" << sum << endl;

    sum2(num1, num2, sum);
    cout << "sum2:" << sum << endl;

    sum3(num1, num2, sum);
    cout << "sum3:" << sum  << endl;

    sum4(num1, &num2, sum);
    cout << "sum4:" << sum << endl;

    sum5(&num1, &num2, sum);
    cout << "sum5:" << sum << endl;
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
