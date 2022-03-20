#include "gtest/gtest.h"
#include "function.h"

TEST(func, test1){
    ASSERT_EQ(func(3,4), 4);
}

TEST(func, test2){
    ASSERT_EQ(func(5,2), 5);
}

TEST(func, test3){
    ASSERT_EQ(func(7,-1), 7);

}
TEST(func, test4){
    ASSERT_EQ(func(4,4), 0);
}