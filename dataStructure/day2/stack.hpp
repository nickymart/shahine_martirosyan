#ifndef STACK_H
#define STACK_H

#include "../day1/list.hpp"

template <typename T>
class Stack
{
public:
  List<T> _list;
  Stack(List<T>);

  void push(T);
  T pop();
  T peek();
};

template <typename T>
void Stack<T>::push(T new_data)
{
  _list.add(new_data);
}

template <typename T>
T Stack<T>::pop()
{
  T data = peek();
  _list.removeAt(_list.getCount() - 1);
  return data;
}

template <typename T>
T Stack<T>::peek()
{
  return _list.getElement(_list.getCount() - 1);
}

#endif