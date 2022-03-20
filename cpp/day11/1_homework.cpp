#include <iostream>
#include <cmath>
using namespace std;

int count(int num);
int main()
{
    int num;
    cout << "Input number:";
    cin >> num;
    int index1, index2;
    cout << "Input position to swap:";
    cin >> index1 >> index2;
    int c = count(num);
    if(index1 > c || index2 > c || index1 <= 0 || index2 <= 0){
        cout << "Error!";
        return 0;
    }
    int elem1 = (int)(num / pow(10, c - index1)) % 10;
    int elem2 = (int)(num / pow(10, c - index2)) % 10;
    num = num - elem2 * pow(10, c - index2) + elem1 * pow(10, c - index2);
    num = num - elem1 * pow(10, c - index1) + elem2 * pow(10, c - index1);
    cout << num;
    return 0;
}
int count(int num) {
    int i;
    for(i = 0;num > 0; i++){
        num /= 10;    
    }    
    return i;
}
