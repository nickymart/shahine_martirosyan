#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

void get_month(int month);
void counting(int, double, int);

int main (int argc, char** argv) {
        int sum = atoi(argv[1]);
        double perc = atof(argv[2]);
        int month = atoi(argv[3]);
        counting(sum, perc, month);
        return 0;
}
void counting(int amount, double percent, int month) {
        int difference = 0;
        time_t now = time(0);
        tm *ltm = localtime(&now);
        for (int i = ltm->tm_mon; i < month + ltm->tm_mon; i++) { 
                difference = amount * (percent / 100 / 12) ;
                amount += amount * percent / 100;
                get_month(i + ltm->tm_mon);
                cout << ": " << amount << " " << difference << endl;
        }
        cout << "The Result is  "  << amount << endl;
}
void get_month(int month) {
    switch (month) {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        default:
            cout << "December";
    }
}
