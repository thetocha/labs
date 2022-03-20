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

TEST(GetDenominator, expected_4){
    ProperFraction drob(3,4);
    int a = drob.GetDenominator(drob);
    ASSERT_EQ(a,4);
}


TEST(Sum, expected_11_3){
    ProperFraction fraction(2,3);
    fraction.FractionSum(3);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,11);
    ASSERT_EQ(b,3);
}
TEST(Sum, expected_minus7_3){
    ProperFraction fraction(2,3);
    fraction.FractionSum(-3);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,-7);
    ASSERT_EQ(b,3);
}
TEST(Sum, expected_2_3){
    ProperFraction fraction(2,6);
    ProperFraction fraction1(1,3);
    fraction.FractionSum(fraction1);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,2);
    ASSERT_EQ(b,3);
}
TEST(Sum, expected_19_15){
    ProperFraction fraction(2,3);
    ProperFraction fraction1(3,5);
    fraction.FractionSum(fraction1);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,19);
    ASSERT_EQ(b,15);
}


TEST(reduction, test1){
    ProperFraction fraction(4,8);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,1);
    ASSERT_EQ(b,2);
}
TEST(reduction, test2){
    ProperFraction fraction(3,6);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,1);
    ASSERT_EQ(b,2);
}
TEST(reduction, test3){
    ProperFraction fraction(3,4);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,3);
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


TEST(Multiplication, expected_4_5){
    ProperFraction fraction(2,5);
    fraction.FractionMultiplication(2);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,4);
    ASSERT_EQ(b,5);
}
TEST(Multiplication, expected_minus6_5){
    ProperFraction fraction(2,5);
    fraction.FractionMultiplication(-3);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,-6);
    ASSERT_EQ(b,5);
}
TEST(Multiplication, expected_1_3){
    ProperFraction fraction(2,5);
    ProperFraction fraction1(5,6);
    fraction.FractionMultiplication(fraction1);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,1);
    ASSERT_EQ(b,3);
}
TEST(Multiplication, expected_3_10){
    ProperFraction fraction(2,5);
    ProperFraction fraction1(3,4);
    fraction.FractionMultiplication(fraction1);
    int a = fraction.GetNumerator(fraction);
    int b = fraction.GetDenominator(fraction);
    ASSERT_EQ(a,3);
    ASSERT_EQ(b,10);
}


TEST(Division,expected_5_18){
    ProperFraction fraction(5,6);
    fraction.FractionDivisionn(3);
    int a = fraction.GetDenominator(fraction);
    int b = fraction.GetNumerator(fraction);
    ASSERT_EQ(a,18);
    ASSERT_EQ(b,5);

}
TEST(Division,expected_minus_5_12){
    ProperFraction fraction(5,6);
    fraction.FractionDivisionn(-2);
    int a = fraction.GetDenominator(fraction);
    int b = fraction.GetNumerator(fraction);
    ASSERT_EQ(a,-12);
    ASSERT_EQ(b,5);
}
TEST(Division,expected_10_21){
    ProperFraction fraction(5,6);
    ProperFraction fraction1(4,7);
    fraction.FractionDivisionn(fraction1);
    int a = fraction.GetDenominator(fraction);
    int b = fraction.GetNumerator(fraction);
    ASSERT_EQ(a,24);
    ASSERT_EQ(b,35);
}
TEST(Division,expected_3_16){
    ProperFraction fraction(5,6);
    ProperFraction fraction1(10,16);
    fraction.FractionDivisionn(fraction1);
    int a = fraction.GetDenominator(fraction);
    int b = fraction.GetNumerator(fraction);
    ASSERT_EQ(a,3);
    ASSERT_EQ(b,4);
}








