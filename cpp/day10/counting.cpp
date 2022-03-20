#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]) {
        time_t now = time(0);
        char *ltm = ctime(&now);
        string date[5];
        int x = 0;
        for ( int i = 0; ltm[i] != '\0'; i++) {
                if(ltm[i] == ' '){
                        x++;
                        continue;
                }    
                date[x] += ltm[i];    
        }
        int day = stoi(date[2]);
        int year = stoi(date[4]);
        string month[12] = {"Jan","Feb", "Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};  
        int index;
        for (index = 0; true; index++) {
                if(date[1] == month[index]){
                        break;
                }
        }
        int amount = atof(argv[1]);
        double percent = atof(argv[2]);
        int m = atof(argv[3]);
        int difference = 0;
        int income = amount;
        for (int i = 0; i < m + 1; i++) { 
                if (month[index] == "Dec") {
                        year++;
                        index = 0;
                }
                difference = amount * (percent / 100 / 12) ;
                amount += amount * percent / 100 / 12; 
                cout << index +  2 << "/"  << day << "/" << year << "  "<< amount << "  " << difference << endl;
                index ++; 
        }
        income = amount - income;
        cout << "The Result is  "  << amount << " . And the income is " << income  << endl;
        return 0;
}
