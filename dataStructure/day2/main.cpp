#include <iostream>
#include "../day1/list.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include "deque.hpp"

using namespace std;

int main()
{
  Stack<int>* deque = new Stack<int>();
  deque->push(5);
  deque->push(21);
  deque->pop();
  deque->push(45);
  cout << deque->peek();
  deque->display();

  return 0;
}