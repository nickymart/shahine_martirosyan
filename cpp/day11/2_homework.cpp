#include <iostream>
using namespace std;

int main()
{
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    cout << "Input:" << endl;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    int ab_x = -(x1 - x2);
    int ab_y = -(y1 - y2);
    int cd_x = -(x3 - x4);
    int cd_y = -(y3 - y4);
    if(ab_x * cd_x + ab_y * cd_y == 0){
        cout << "yes" << endl;    
    } else {
        cout << "no" << endl;  
    }
}
