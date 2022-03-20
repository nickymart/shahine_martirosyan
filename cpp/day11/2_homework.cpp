#include <iostream>
#include <cmath>
using namespace std;

int count(int num);
int main()
{
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    cout << "Input:" << endl;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    double ab = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double cd = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
    double bc = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double ad = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    double ac = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double db = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
    if(ab == cd && bc == ad && ac == db){
        cout << "yes" << endl;    
    }
}
int count(int num) {
    int i;
    for(i = 0;num > 0; i++){
        num /= 10;    
    }    
    return i;
}
