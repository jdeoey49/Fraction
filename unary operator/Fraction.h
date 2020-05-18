#pragma once
#include<string>
class Fraction
{
public:
	Fraction(int=1,int=1);
	~Fraction();
	std::string toString() const;
	Fraction operator++(int);
	Fraction operator--(int);
	Fraction operator++();
	Fraction operator--();
	Fraction operator-();
private:
	int num_;
	int den_;
	void normalize();
};

