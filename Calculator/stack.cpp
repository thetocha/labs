#include "stack.h"


template<typename T>

void Stack<T>::resize(int a) {
    size_of_array += a;
    top += a;
    T * NewArray = new T [size_of_array];
    for (int i = 0; i < size_of_array; i++) {
        NewArray[i] = array[i];
    }
    delete[] array;
    array = NewArray;
}


template<typename T>
bool Stack<T>::IsEmpty() {
    return !size_of_array;
}

template<typename T>
void Stack<T>::operator << (T value) {
    resize(1);
    array[top] = value;
}

template<typename T>
T * Stack<T>::operator >> (T & deleted) {
    deleted = array[top];
    resize(-1);
    return  &deleted;
}

template<typename T>
void Stack<T>::operator = (Stack& copy) {
    resize(-size_of_array);
    resize(copy.size_of_array);
    for(int i=0; i < size_of_array; ++i){
        array[i] = copy[i];
    }
}

template<typename T>
bool Stack<T>::operator == (Stack& copy){
    return this->size_of_array == copy.size_of_array;
}
template<typename T>
bool Stack<T>::operator < (Stack& copy){
    return this->size_of_array < copy.size_of_array;
}

template<typename T>
bool Stack<T>::operator > (Stack& copy){
    return this->size_of_array > copy.size_of_array;
}

template<typename T>
int Stack<T>::operator [] (int index){
    if (index > top  || index < 0)
        throw  exception ("Try another index");
    return array[index];
}

template<typename T>
Stack<T>::~Stack() {
    delete[] array;
}

template class Stack<int>;
template class Stack<char>;