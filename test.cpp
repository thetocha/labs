#include "gtest/gtest.h"
#include "foos.h"

TEST(Minimun_simple, 3){
    double arr[5] = {56, 77, 85, 4, 6};
    double a = MinimalElement(arr,5);
    ASSERT_DOUBLE_EQ(a,3);
}
TEST(Minimun_simple, 0){
    double arr[5] = {3, 77, 85, 4, 6};
    double a = MinimalElement(arr,5);
    ASSERT_DOUBLE_EQ(a,0);
}
TEST(Minimun_negative, 3){
    double arr[5] = {5, -3, 443, -4, 0};
    double a = MinimalElement(arr,5);
    ASSERT_DOUBLE_EQ(a,3);
}
TEST(Minimun_negative, 2){
    double arr[5] = {5, -3, -443, -4, 0};
    double a = MinimalElement(arr,5);
    ASSERT_DOUBLE_EQ(a,2);
}
TEST(Minimun_floating, 4){
    double arr[5] = {5.6, 7, 4.8, 4.7, 4.6};
    double a = MinimalElement(arr,5);
    ASSERT_DOUBLE_EQ(a,4);
}
TEST(Minimun_floating, 0){
    double arr[5] = {-5.6, 7, 4.8, 4.7, 4.6};
    double a = MinimalElement(arr,5);
    ASSERT_DOUBLE_EQ(a,0);
}



TEST(Sum_one_between, 56){
    double arr[5] = {-5.6, 56, -4.8, 47, 67};
    double a = SumBetweenNegative(arr,5);
    ASSERT_DOUBLE_EQ(a,56);
}
TEST(Sum_3_between, 107_8){
    double arr[5] = {-5.6, 56, 4.8, 47, -67};
    double a = SumBetweenNegative(arr,5);
    ASSERT_DOUBLE_EQ(a,107.8);
}
TEST(Sum_negative_between, 55){
    double arr[5] = {-5.6, 56, -48, 47, -67};
    double a = SumBetweenNegative(arr,5);
    ASSERT_DOUBLE_EQ(a,55);
}
TEST(Sum_only_one_negative_in_front, exit_expected){
    double arr[5] = {-5.6, 56, 48, 47, 67};
    EXPECT_ANY_THROW(SumBetweenNegative(arr,5));
}TEST(Sum_only_one_negative_in_end, exit_expected){
    double arr[5] = {5.6, 6789, 4, -7, 67};
    EXPECT_ANY_THROW(SumBetweenNegative(arr,5));
}TEST(Sum_no_negative, exit_expected){
    double arr[5] = {5.6, 56, 48, 47, 67};
    EXPECT_ANY_THROW(SumBetweenNegative(arr,5));
}


TEST(Sorting_some_negative,equal){
    double arr[5] = {-5.6, -6789, 4, -7, 67};
    double *array;
    array = Sorting(arr,5,6);
    ASSERT_DOUBLE_EQ(array[0],-5.6);
    ASSERT_DOUBLE_EQ(array[1],4);
    ASSERT_DOUBLE_EQ(array[2],-6789);
    ASSERT_DOUBLE_EQ(array[3],-7);
    ASSERT_DOUBLE_EQ(array[4],67);
}TEST(Sorting_all_negative,equal){
    double arr[5] = {-5.6, -6789, -34, -7, -87};
    double *array;
    array = Sorting(arr,5,6);
    ASSERT_DOUBLE_EQ(array[0],-5.6);
    ASSERT_DOUBLE_EQ(array[1],-6789);
    ASSERT_DOUBLE_EQ(array[2],-34);
    ASSERT_DOUBLE_EQ(array[3],-7);
    ASSERT_DOUBLE_EQ(array[4],-87);
}TEST(Sorting_all_positive,equal){
    double arr[5] = {56, 67.9, 4, 7, 89};
    double *array;
    array = Sorting(arr,5,6);
    ASSERT_DOUBLE_EQ(array[0],4);
    ASSERT_DOUBLE_EQ(array[1],56);
    ASSERT_DOUBLE_EQ(array[2],67.9);
    ASSERT_DOUBLE_EQ(array[3],7);
    ASSERT_DOUBLE_EQ(array[4],89);
}TEST(Sorting_negative_element_is_equal_to_const,equal){
    double arr[5] = {-5.6, -6789, -6, -7, -87};
    double *array;
    array = Sorting(arr,5,6);
    ASSERT_DOUBLE_EQ(array[0],-5.6);
    ASSERT_DOUBLE_EQ(array[1],-6789);
    ASSERT_DOUBLE_EQ(array[2],-6);
    ASSERT_DOUBLE_EQ(array[3],-7);
    ASSERT_DOUBLE_EQ(array[4],-87);
}TEST(Sorting_positive_element_is_equal,equal){
    double arr[5] = {56, 6789, -3.4, 7, -78};
    double *array;
    array = Sorting(arr,5,6789);
    ASSERT_DOUBLE_EQ(array[0],56);
    ASSERT_DOUBLE_EQ(array[1],-3.4);
    ASSERT_DOUBLE_EQ(array[2],7);
    ASSERT_DOUBLE_EQ(array[3],-78);
    ASSERT_DOUBLE_EQ(array[4],6789);
}

