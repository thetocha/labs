#include "function.h"
#include "gtest/gtest.h"

int func(int a, int b){
    if(a > b)
        return a;
    if(a < b)
        return b;
    if(a == b)
        return 0;
}