#ifndef LAB6_PROPERFRACTION_H
#define LAB6_PROPERFRACTION_H
#include <iostream>

using namespace std;

class ProperFraction{
public:
    ProperFraction(int numerator, int denominator);
    ProperFraction(const ProperFraction& origin);
    void ProperFraction::FractionReduction();
    int ProperFraction::GetNumerator(ProperFraction);
    int ProperFraction::GetDenominator(ProperFraction);
    void ProperFraction::FractionSum(int term);
    void ProperFraction::FractionMultiplication(int factor);
    void ProperFraction::FractionDivisionn(int devider);
    void ProperFraction::FractionSum(ProperFraction term);
    void ProperFraction::FractionMultiplication(ProperFraction factor);
    void ProperFraction::FractionDivisionn(ProperFraction devider);
    void ProperFraction::FractionPrint();

private:
    int numerator;
    int denominator;
};


#endif //LAB6_PROPERFRACTION_H
