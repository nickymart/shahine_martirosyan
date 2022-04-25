#include <iostream>
#include "../day1/list.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include "deque.hpp"

using namespace std;

int main()
{
  List<int> temp;
  temp.add(8);
  temp.add(10);
  temp.add(20);
  temp.addByIndex(25, 3);
  temp.addFront(26);
  temp.removeAt(0);

  Deque<int> *deque = new Deque<int>(temp);
  deque->pushFront(5);
  deque->_list.display();
  return 0;
}