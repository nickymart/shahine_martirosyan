#include <iostream>
using namespace std;
void weekday (int);
int main (){
    int day;
    cout << "Input week number (1-7):";
    cin >> day;
    weekday(day);
    return 0;
}
void weekday(int day) {
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Error!" << endl;
            break;
    }
}
