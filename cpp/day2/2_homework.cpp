#include <iostream>
using namespace std;
int main() {
    int month;
    cout << "Input month number (1-12):";
    
    cin >> month;
    switch (month) {
        case 1:
            cout << "Total number of days = 31" << endl;
            break;
        case 2:
            cout << "Total number of days = 28-29" << endl;
            break;
        case 3:
            cout << "Total number of days = 31" << endl;
            break;
        case 4:
            cout << "Total number of days = 30" << endl;
            break;
        case 5:
            cout << "Total number of days = 31" << endl;
            break;
        case 6:
            cout << "Total number of days = 30" << endl;
            break;
        case 7:
            cout << "Total number of days = 31" << endl;
            break;
        case 8:
            cout << "Total number of days = 31" << endl;
            break;
        case 9:
            cout << "Total number of days = 30" << endl;
            break;
        case 10:
            cout << "Total number of days = 31" << endl;
            break;
        case 11:
            cout << "Total number of days = 30" << endl;
            break;
        case 12:
            cout << "Total number of days = 31" << endl;
            break;
        default:
            cout << "Error!" << endl;
            break;
    }
    return 0;
}
