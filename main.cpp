#include <iostream>
#include <iostream>

using namespace std;

class Stack{
    int size;
    int *array= new int[size];
    int top;
public:
    Stack() : size(0), top(-1) {}
    bool IsEmpty() {
        return !size;
    }
    void resize(int a) {
        size += a;
        top += a;
        int* NewArray = new int[size];
        for (int i = 0; i < size; i++) {
            NewArray[i] = array[i];
        }
        delete[] array;
        array = NewArray;
    }
    void operator << (int value) {
            resize(1);
            array[top] = value;
    }
    int* operator >> (int& deleted) {
        deleted = array[top];
        resize(-1);
        return  (int*)deleted;
    }
    void operator = (Stack& copy) {
        resize(size);
        resize(copy.size);
        for(int i=0; i < size; ++i){
            array[i] = copy[i];
        }
    }

    bool operator == (Stack& copy){
        return this->size == copy.size;
    }
    bool operator < (Stack& copy){
        return this->size < copy.size;
    }

    bool operator > (Stack& copy){
        return this->size > copy.size;
    }

    int operator [] (int index){
        if (index > top)
            throw  exception ("Try another index");
        return array[index];
    }

    ~Stack() {
        delete[] array;
    }
};


int main(){
    
    return 0;
}
