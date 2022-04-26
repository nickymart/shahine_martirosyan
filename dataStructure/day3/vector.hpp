#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

template <typename T>
class Vector {
    private:
        T *arr;
        int size;
        int capacity;
    public:
        Vector();
        void AddFront(T);
        void Add(T);
        void AddAt(int, T);
        void RemoveAt(int);
        void RemoveAll();

        int getSize() const;
        int getCapacity() const;
        const T operator[](int index);

        template <typename Out>
        friend ostream&operator<<(ostream&, const Vector<Out>&);
};

template <typename T>
Vector<T>::Vector() {
    capacity = 4;
    size = 0;
    arr = new T[capacity];
}

template <typename T>
const T Vector<T>::operator[](int index) {
    return arr[index];
}

template <typename T>
void Vector<T>::Add(T data) {
    if (size == capacity) {
        capacity *= 2;
        T *newArr = new T[capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        arr = new T[capacity];
        for (int i = 0; i < size; i++) {
            arr[i] = newArr[i];
        }
    }

    arr[size] = data;
    size++;
}

template <typename T>
void Vector<T>::AddAt(int index, T data) {
    if(index < 0 || index > size) {
        throw runtime_error("Index out of range.");
    }

    if(size == capacity) {
        capacity *= 2;
        T *newArr = new T[capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        arr = new T[capacity];
        for (int i = 0; i < size; i++) {
            arr[i] = newArr[i];
        }
    }

    for(int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = data;
    size++;
}

template <typename T>
void Vector<T>::AddFront(T data) {
    AddAt(0, data);
}

template <typename T>
void Vector<T>::RemoveAt(int index) {
    if(index < 0 || index > size) {
        throw runtime_error("Index out of range.");
    }

    if(size == capacity && capacity != 4) {
        capacity /= 2;
        T *newArr = new T[capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        arr = new T[capacity];
        for (int i = 0; i < size; i++) {
            arr[i] = newArr[i];
        }
    }

    for(int i = index; i < size; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
}

template <typename T>
void Vector<T>::RemoveAll() {
    delete[] arr;
    capacity = 4;
    size = 0;
    arr = new T[capacity];
}

template <typename T>
int Vector<T>::getSize() const {
    return size;
}

template <typename T>
int Vector<T>::getCapacity() const {
    return capacity;
}

template <typename Out>
ostream&operator<<(ostream &out, const Vector<Out>& vector) {
    for (int i = 0; i < vector.size; i++) {
            out << vector.arr[i] << " ";
    }

    return out;
}

#endif
