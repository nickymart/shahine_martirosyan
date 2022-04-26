#ifndef LIST_H
#define LIST_H

using namespace std;

template <typename T>
struct Node
{
  T _data;
  Node<T> *_next;

  Node()
  {
    _data = T();
    _next = nullptr;
  };

  Node(T data, Node<T> *next)
  {
    _data = data;
    _next = next;
  }
};

template <typename T>
class List
{
  private:
    int _count = 0;
    Node<T> *_head;

  public:
    List();
    ~List();

    int getElement(int);
    int getCount() const;
  
    void addByIndex(T, int);
    void add(T);
    void addFront(T);
    void remove(T);
    void removeAt(int);
    void display();
    void removeAll();

    bool isEmpty();
};

template <typename T>
List<T>::List()
{
  _head = nullptr;
}

template <typename T>
List<T>::~List()
{
  _head = nullptr;
  _count = 0;
  removeAll();
}

template <typename T>
void List<T>::remove(T delData)
{
  Node<T> *delPtr = nullptr;
  Node<T> *_temp = _head;
  Node<T> *_curr = _head;
  while (_curr != nullptr && _curr->_data != delData)
  {
    _curr = _curr->_next;
  }

  if (_curr == nullptr)
  {
    delete delPtr;
    throw runtime_error(to_string(delData) + " was not in the list.");
  }
  else
  {
    delPtr = _curr;
    _curr = _curr->_next;
    _temp->_next = _curr;
    delete delPtr;
    _count--;
  }
}

template <typename T>
void List<T>::add(T new_data)
{
  Node<T> *node = new Node<T>();
  node->_data = new_data;
  node->_next = nullptr;

  if (_head != nullptr)
  {
    Node<T> *_curr = _head;
    while (_curr->_next != nullptr)
    {
      _curr = _curr->_next;
    }
    _curr->_next = node;
  }
  else
  {
    _head = node;
  }
  _count++;
}

template <typename T>
void List<T>::addFront(T new_data)
{
  _head = new Node<T>(new_data, _head);
  _count++;
}

template <typename T>
void List<T>::addByIndex(T new_data, int index)
{
  if (index < 0 || index > _count)
  {
    throw runtime_error("Index out of range.");
  }

  Node<T> *node = _head;

  if (!index)
  {
    addFront(new_data);
    return;
  }

  while (index - 1 > 0)
  {
    node = node->_next;
    index--;
  }

  Node<T> *newNode = new Node<T>(new_data, node->_next);
  node->_next = newNode;

  _count++;
}

template <typename T>
void List<T>::display()
{
  if (isEmpty())
  {
    cout << 0 << endl;
  }

  Node<T> *_curr = _head;
  while (_curr != nullptr)
  {
    cout << _curr->_data << endl;
    _curr = _curr->_next;
  }
}

template <typename T>
bool List<T>::isEmpty()
{
  return _count == 0;
}

template <typename T>
int List<T>::getElement(int index)
{
  if (index < 0 || index > _count)
  {
    throw runtime_error("Index out of range.");
  }

  Node<T> *node = this->_head;
  while (index > 0)
  {
    node = node->_next;
    index--;
  }
  return node->_data;
}

template <typename T>
void List<T>::removeAt(int index)
{
  if (index < 0 || index > _count)
  {
    throw runtime_error("Index out of range.");
  }

  Node<T> *node = this->_head;

  if (index == 0)
  {
    _head = _head->_next;
    delete node;
    _count--;
    return;
  }

  while (index - 1 > 0)
  {
    node = node->_next;
    index--;
  }

  Node<T> *newNode = node->_next;
  node->_next = newNode->_next;

  delete newNode;

  _count--;
}

template <typename T>
void List<T>::removeAll()
{
  int count = _count - 1;
  while (count - 1 > 0)
  {
    removeAt(count);
    count--;
  }
}

template <typename T>
int List<T>::getCount() const
{
  return _count;
};

#endif
