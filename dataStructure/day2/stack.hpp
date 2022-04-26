#ifndef STACK_H
#define STACK_H

#include "../day1/list.hpp"

template <typename T>
class Stack
{
  private:
  List<T> _list;

  public:
    void push(T);
    void display();
    T pop();
    T peek();
};

template <typename T>
void Stack<T>::display()
{
  _list.display();
}

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
