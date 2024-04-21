#include <iostream>
#include "Fraction.h"

using namespace std;

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