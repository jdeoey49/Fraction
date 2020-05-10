#pragma once
#include<string>
class Fraction
{
public:
	Fraction(int=1,int=1);
	~Fraction();
	std::string toString() const;
private:
	int num_;
	int den_;
	void normalize();
};

