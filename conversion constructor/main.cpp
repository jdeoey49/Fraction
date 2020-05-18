#include<iostream>
#include"Fraction.h"
using namespace std;
int main()
{
	Fraction b1(1,4);
	cout << "b1=" << b1 << endl;
	cout << "b1+2=" << b1 + 2 << endl;
	cout << "2+b1=" << 2 + b1 << endl;
	Fraction b2(2.25);
	cout << "\nb2=" << b2 << endl;
	cout << "b2+0.25=" << b2 + 0.25 << endl;
	cout<<"0.25+b2="<<0.25+b2<<endl;
	return 0;
}