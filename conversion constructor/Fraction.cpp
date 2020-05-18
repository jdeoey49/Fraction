#include<iostream>
#include<sstream>
#include "Fraction.h"
using namespace std;
Fraction::~Fraction()
{
	//cout << "destructor at work" << endl;
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
Fraction::Fraction(double d)
{
	std::cout << "conversion constructor for double at work" << std::endl;
	double factor = 10000.0;
	num_ = static_cast<int>(d*factor);
	den_ = static_cast<int>(factor);
	this->normalize();
}
Fraction operator+(const Fraction& f1ref, const Fraction& f2ref)
{
	Fraction ans;
	ans.num_ = f1ref.num_*f2ref.den_ + f2ref.num_*f1ref.den_;
	ans.den_ = f1ref.den_ * f2ref.den_;
	ans.normalize();
	return ans;
}
ostream& operator<<(ostream& oref, const Fraction& fref)
{
	oref << fref.num_ << "/" << fref.den_ << endl;
	return oref;
}