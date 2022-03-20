#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H

#include <iostream>
#include <string>
#include "stack.h"


class Calculator{
public:
    Calculator();

    void EnteringProblem();
    int Result();
    string toPolish();

private:
    Stack<int> vals;
    Stack<char> ops;
    string problem;
    int result;

     bool IsNumber(char symbol);
     bool IsOperator(char symbol);
     int OperationsPriority(char op);
     int ResultOfOperation (int a, int b, char op);

    string* RemoveSpaces();
};





#endif //CALCULATOR_CALCULATOR_H
