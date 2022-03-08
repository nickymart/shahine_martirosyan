#include <iostream>
using namespace std;
int area (int, int);
int perimeter (int, int);
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
int area (int a, int b){
    return  a * b;
}
int perimeter(int a, int b){
    return (a + b) * 2;
}
