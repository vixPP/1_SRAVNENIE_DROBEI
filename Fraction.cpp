#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
    numerator_ = numerator;
    denominator_ = denominator;
};
bool Fraction::operator==(const Fraction& other) const
{
    return (numerator_ * other.denominator_) == (denominator_ * other.numerator_);
}
bool Fraction::operator!=(const Fraction& other) const
{
    return !(*this == other);
}
bool Fraction::operator<(const Fraction& other) const
{
    return (numerator_ * other.denominator_) < (denominator_ * other.numerator_);
}
bool Fraction::operator>(const Fraction& other) const
{
    return (other < *this);
}
bool Fraction::operator<=(const Fraction& other) const
{
    return !(*this > other);
}
bool Fraction::operator>=(const Fraction& other) const
{
    return !(*this < other);
}