#include <iostream>
#include "myatoi.h"
using namespace std;

int main(int argc, char** argv) {
        int sum_my_atoi = 0;
        int sum_atoi = 0;
        for (int i = 1; i < argc; i++) {
                sum_my_atoi += my_atoi(argv[i]);
                sum_atoi += atoi(argv[i]);
        }
        cout << "sum_my_atoi:" << sum_my_atoi << endl;
        cout << "sum_atoi:" << sum_atoi << endl;
        return 0;
}
