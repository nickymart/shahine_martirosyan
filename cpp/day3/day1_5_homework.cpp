#include <iostream>
using namespace std;
double area (int, int);
double perimeter (int, int);
int main () {
    double a;
    double b;
    cout << "Enter the sides of rectangle." << endl;
    cin >> a >> b;
    double s = area(a, b);
    double p = perimeter(a, b);
    cout << "The Perimeter is " << p << "." << endl;
    cout << "The Area is " << s << "." << endl;
    return 0;
}
double area (double a, double b){
    return  a * b;
}
double perimeter(double a, double b){
    return (a + b) * 2;
}
