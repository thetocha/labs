#include "gtest/gtest.h"
#include "ProperFraction.h"

TEST(constuctor_DethTest, test1){
    ASSERT_EXIT(ProperFraction fraction(5,4), ::testing::ExitedWithCode(1), "Try other numerator and denominator");
}

TEST(constuctor_DethTest, test2){
    ASSERT_EXIT(ProperFraction fraction(5,0), ::testing::ExitedWithCode(1), "Try other numerator and denominator");
}


TEST(constructor, test1){
    ProperFraction fraction(3,4);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,3);
    ASSERT_EQ(b,4);
}

TEST(GetNumerator, test1){
    ProperFraction drob(3,4);
    int a = drob.GetNumerator(drob);
    ASSERT_EQ(a,3);
}

TEST(reduction, test1){
    ProperFraction fraction(4,8);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,1);
    ASSERT_EQ(b,2);
}

TEST(reduction, test2){
    ProperFraction fraction(4,2);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,2);
    ASSERT_EQ(b,1);
}

TEST(reduction, test3){
    ProperFraction fraction(0,4);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,0);
    ASSERT_EQ(b,4);
}

TEST(reduction, test4){
    ProperFraction fraction(16,24);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,2);
    ASSERT_EQ(b,3);
}

TEST(reduction, test5){
    ProperFraction fraction(4,5);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,4);
    ASSERT_EQ(b,5);
}

TEST(reduction, test6){
    ProperFraction fraction(4,4);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,1);
    ASSERT_EQ(b,1);
}

TEST(reduction, test7){
    ProperFraction fraction(24,16);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,3);
    ASSERT_EQ(b,2);
}

