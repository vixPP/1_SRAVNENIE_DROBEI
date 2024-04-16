﻿#include <iostream>

using namespace std;

class Fraction
{
private:

	int numerator_;
	int denominator_;

	
public:
	
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;

	}

    bool operator==(const Fraction& other) const
    {
        return (numerator_ * other.numerator_) == (denominator_ * other.denominator_);
    }

    bool operator!=(const Fraction& other) const
    {
        return !(*this == other);
    }

    bool operator<(const Fraction& other) const
    {
        return (numerator_ * other.denominator_) < (denominator_ * other.numerator_);
    }

    bool operator>(const Fraction& other) const
    {
        return (other < *this);
    }

    bool operator<=(const Fraction& other) const
    {
        return !(*this > other);
    }

    bool operator>=(const Fraction& other) const
    {
        return !(*this < other);
    }
};


int main()
{
	Fraction f1(4, 3);
    Fraction f2(6, 11);
	cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}