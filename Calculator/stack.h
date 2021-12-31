#ifndef CALCULATOR_STACK_H
#define CALCULATOR_STACK_H

#include <iostream>

using namespace std;

template<typename T>

class Stack{
    int size_of_array;
    T *array= new T [size_of_array];
    int top;
    void resize(int a);
public:
    Stack() : size_of_array(0), top(-1) {}
    bool IsEmpty();


    void operator << (T value);
    T * operator >> (T & deleted);
    void operator = (Stack& copy);

    bool operator == (Stack& copy);
    bool operator < (Stack& copy);

    bool operator > (Stack& copy);

    int operator [] (int index);

    ~Stack();
};

#endif //CALCULATOR_STACK_H
