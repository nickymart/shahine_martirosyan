#include <iostream>
#include "vector.h"

using namespace std;

int main() {
    Vector<int> vector;
    vector.Add(110);
    vector.Add(101);
    vector.Add(102);
    vector.Add(121);
    vector.Add(21);
    vector.Add(7);   
    vector.Add(25);
    vector.Add(28);
    vector.Add(21);
    vector.AddFront(105);
    vector.AddAt(3, 345);   
    vector.RemoveAt(5);
    vector.RemoveAt(3);
    cout << vector << endl;
    vector.Add(21);
    cout << vector.getCapacity() << endl;
    cout << vector[5] << endl;
    // cout << vector.getSize() << endl;
    return 0;
}
