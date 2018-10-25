//
// Created by cm_ra on 10/25/2018.
//

#include "../include/fractions.h"

int32_t Fraction::getNumerator() const {
    return numerator;
}

int32_t Fraction::getDenominator() const {
    return denominator;
}
void Fraction::setNumerator(int32_t &numerator) {
    this->numerator = numerator;
}

void Fraction::setDenominator(int32_t denominator) {
    this->denominator = denominator;
}

void Fraction::output() {
    std::cout << numerator << " / " << denominator
}