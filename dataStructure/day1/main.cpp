#include <iostream>
#include "list.hpp"

using namespace std;

int main()
{
  List<int> temp;
  temp.add(8);
  temp.add(10);
  temp.add(20);
  temp.addByIndex(25, 3);
  temp.addFront(26);
  temp.removeAt(1);
  temp.display();
  cout << temp.getCount() << endl;

  return 0;
}