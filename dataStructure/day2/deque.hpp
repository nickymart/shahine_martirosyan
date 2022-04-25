#ifndef DEQUE_H
#define DEQUE_H

#include "../day1/list.hpp"

template <typename T>
class Deque
{
public:
  List<T> _list;
  Deque(List<T>);

  void pushBack(T);
  void popBack();
  void pushFront(T);
  void popFront();
};

template <typename T>
Deque<T>::Deque(List<T> list)
{
  _list = list;
}

template <typename T>
void Deque<T>::pushBack(T new_data)
{
  _list.add(new_data);
}

template <typename T>
void Deque<T>::popBack()
{
  _list.removeAt(_list._count - 1);
}

template <typename T>
void Deque<T>::pushFront(T new_data)
{
  _list.addFront(new_data);
}

template <typename T>
void Deque<T>::popFront()
{
  _list.removeAt(0);
}

#endif