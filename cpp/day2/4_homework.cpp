#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;
    char operatorr;
    cout<< "Input number 1:";
    cin >> num1;
    cout<< "Input operator:";
    cin >> operatorr;
    cout<< "Input number 2:";
    cin >> num2;
    double res;
    bool b = false;
    switch (operatorr) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (!num2) {
                cout << "Cannot divide by zero" << endl;
                b = true;
            } else {
                res = num1 / num2;    
            }
            break;    
        default:
            cout << "Error!" << endl;
            b = true;
            break;
    }
    if (b == false) {
        cout << res << endl;    
    }
    return 0;
}

