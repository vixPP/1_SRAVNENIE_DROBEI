#pragma once
#include <iostream>

class Fraction
{
	private:

		int numerator_;
		int denominator_;

	public:

        Fraction(int numerator, int denominator);

        bool operator==(const Fraction& other) const;
        

        bool operator!=(const Fraction& other) const;
        

        bool operator<(const Fraction& other) const;
        

        bool operator>(const Fraction& other) const;
        

        bool operator<=(const Fraction& other) const;
        

        bool operator>=(const Fraction& other) const;
        

};

