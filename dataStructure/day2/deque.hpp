#ifndef DEQUE_H
#define DEQUE_H

#include "../day1/list.hpp"

template <typename T>
class Deque
{
  private:
    List<T> _list;
  
  public:
    void pushBack(T);
    T popBack();
  
    void pushFront(T);
    T popFront();
  
    void display();
};

template <typename T>
void Deque<T>::display()
{
  _list.display();
}

template <typename T>
void Deque<T>::pushBack(T new_data)
{
  _list.add(new_data);
}

template <typename T>
T Deque<T>::popBack()
{
  T data = _list.getElement(_list.getCount() - 1);
  _list.removeAt(_list.getCount() - 1);
  return data;
}

template <typename T>
void Deque<T>::pushFront(T new_data)
{
  _list.addFront(new_data);
}

template <typename T>
T Deque<T>::popFront()
{
  T data = _list.getElement(_list.getCount() - 1);
  _list.removeAt(0);
  return data;
}

#endif
