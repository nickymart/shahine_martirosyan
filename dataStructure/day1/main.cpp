#include <iostream>
#include "list.h"
using namespace std;


int main(){
  List temp;
  temp.add(8);
  temp.add(10);
  temp.add(20);
  temp.add(25, 3);
  temp.addFront(26);
  temp.removeAt(0);
  temp.remove(25);
  temp.display();
  cout << temp._count;
  return 0;
}