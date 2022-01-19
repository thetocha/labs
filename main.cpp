#include <iostream>
#include "foos.h"
using namespace std;

int main(){
    double *arr;
    arr = CreatingArray(1,6);
    MinimalElement(arr, 6);
    SumBetweenNegative(arr,6);
    cout << endl;
    Sorting(arr,6,7);
    return 0;
}
