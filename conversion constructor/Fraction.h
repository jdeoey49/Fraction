#pragma once
#include<string>
class Fraction
{
	friend std::ostream& operator<<(std::ostream& oref, const Fraction& fref);
	friend Fraction operator+(const Fraction& f1ref, const Fraction& f2ref);
public:
	Fraction() :num_(1), den_(1) {}
	Fraction(int n,int d):num_(n),den_(d){}
	~Fraction();
	std::string toString() const;
	//conversion constructor for int
	Fraction(int n) :num_(n), den_(1) { std::cout << "conversion constructor for int at work" << std::endl; }
	//conversion constructor for double
	Fraction(double d);
private:
	int num_;
	int den_;
	void normalize();
};

