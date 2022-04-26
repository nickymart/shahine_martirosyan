#ifndef QUEUE_H
#define QUEUE_H

#include "../day1/list.hpp"

template <typename T>
class Queue
{
  private:
    List<T> _list;
  public:
    void pushFront(T);
    void display();
    T popBack();
    T peek();
};

template <typename T>
void Queue<T>::display(){
  _list.display();
}

template <typename T>
void Queue<T>::pushFront(T new_data)
{
  _list.addFront(new_data);
}

template <typename T>
T Queue<T>::popBack()
{
  T data = peek();
  _list.removeAt(_list.getCount() - 1);
  return data;
}

template <typename T>
T Queue<T>::peek()
{
  return _list.getElement(_list.getCount() - 1);
}

#endif