#include<iostream>
#include<sstream>
#include "Fraction.h"
using namespace std;
Fraction::Fraction(int num,int den):num_(num),den_(den)
{
	cout << "defalut constructor at work" << endl;
}
Fraction::~Fraction()
{
	cout << "destructor at work" << endl;
}
string Fraction::toString() const
{
	ostringstream buffer;
	buffer << num_ << "/" << den_;
	return buffer.str();
}
void Fraction::normalize()
{
	int gcd=1;
	for (int i = 1; i <= num_ && i <= den_; i++)
	{
		if (num_%i == 0 && den_%i == 0)
		{
			num_ = num_ / i;
			den_ = den_ / i;
		}
	}
}