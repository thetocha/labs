#include "ProperFraction.h"
#include <cmath>
ProperFraction::ProperFraction(int numerator, int denominator) {
    if (denominator == 0 || abs(numerator) > abs(denominator)) {
        cout << "Try other numerator and denominator" << endl;
        exit(1);
    }
    else{
        this -> numerator = numerator;
        this -> denominator = denominator;
        FractionReduction();
    }
}
ProperFraction::ProperFraction(const ProperFraction &origin) {
    this -> numerator = origin.numerator;
    this -> denominator = origin.denominator;
    FractionReduction();
}

void ProprFraction::FractionReduction() {
    int n = min(abs(numerator), abs(denominator));
    for (int i = n; i > 0; i--){
        if (numerator % i == 0){
            if (denominator % i == 0){
                numerator = numerator / i;
                denominator = denominator / i;
            }
        }
    }
}



int ProperFraction::GetNumerator(ProperFraction){
    return numerator;
}

int ProperFraction::GetDenominator(ProperFraction){
    return denominator;
}



void ProperFraction::FractionSum(int term){
    this -> numerator += term * denominator;
    this -> denominator = denominator;
    FractionReduction();
}

void ProperFraction::FractionSum(ProperFraction term){
    this -> numerator = (this -> numerator * term.denominator) + (this-> denominator * term.numerator);
    this -> denominator *= term.denominator;
    FractionReduction();
}




void ProperFraction::FractionMultiplication(int factor){
    this -> numerator *= factor;
    this -> denominator = denominator;
    FractionReduction();
}
void ProperFraction::FractionMultiplication(ProperFraction factor) {
    this-> numerator *= factor.numerator;
    this-> denominator *= factor.denominator;
    FractionReduction();
}



void ProperFraction::FractionDivisionn(int devider){
    this -> numerator = numerator;
    this -> denominator *= devider;
    FractionReduction();
}
void ProperFraction::FractionDivisionn(ProperFraction devider){
    this -> numerator *= devider.denominator;
    this-> denominator *= devider.numerator;
}


void ProperFraction::FractionPrint(){
    double sign =(double) numerator / denominator;
    if(sign < 0)
        cout << "The fraction is " << "-" << abs(numerator) << "/" << abs(denominator) << endl;
    else if (sign > 0)
        cout << "The fraction is "  << (numerator) << "/" << (denominator) << endl;
    else
        cout << "The fraction is 0" << endl;
}
