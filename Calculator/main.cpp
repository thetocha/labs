#include <iostream>
#include "calculator.h"
int main(){
    Calculator calculator;
    calculator.EnteringProblem();
    cout << calculator.Result() << endl;
    return 0;
}
