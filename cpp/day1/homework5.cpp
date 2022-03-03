#include <iostream>
using namespace std;

int main () {
        double a;
        double b;
        cout << "Enter the sides of rectangle." << endl;
        cin >> a >> b;
        double p = (a + b) * 2;
        double s = a * b;
        cout << "The Perimeter is " << p << endl;
        cout << "The Area is " << s << endl;
        return 0;
}
