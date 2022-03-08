#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;
    char operatorr;
    cout << "Input number 1:";
    cin >> num1;
    cout << "Input operator:";
    cin >> operatorr;
    cout << "Input number 2:";
    cin >> num2;
    switch (operatorr) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (!num2) {
                cout << "Cannot divide by zero" << endl;
            } else {
                cout << num1 / num2;    
            }
            break;    
        default:
            cout << "Error!" << endl;
            break;
    }
    cout << endl;
    return 0;
}
