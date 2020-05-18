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
Fraction Fraction::operator++(int)
{
	Fraction ans= *this;
	(this->num_) = (this->num_) + (this->den_);
	return ans;
}
Fraction Fraction::operator--(int)
{
	Fraction ans = *this;
	(this->num_) = (this->num_) - (this->den_);
	return ans;
}
Fraction Fraction::operator++()
{
	(this->num_) += (this->den_);
	return *this;
}
Fraction Fraction::operator--()
{
	(this->num_) -= (this->den_);
	return *this;
}
Fraction Fraction::operator-()
{
	int sign = 1;
	int num(this->num_); int den(this->den_);
	if (num < 0) { sign = -1; num = -num;}
	if (den < 0) { sign = -1; den = -den;}
	sign = -sign;
	this->num_ = num * sign;
	this->den_ = den;
	return *this;
}
