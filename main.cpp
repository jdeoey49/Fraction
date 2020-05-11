#include<iostream>
#include"Fraction.h"
using namespace std;
int main()
{
	Fraction b1(-7,13), b2(2,5), b3(2,5), b4, b5;
	cout << "- operator" << endl;
	cout << "b1=" << b1.toString() << endl;
	-b1;
	cout << "-b1=" << b1.toString() << endl;
	cout << "prefix ++ operator" << endl;
	cout << "b2=" << b2.toString() << endl;
	cout << "b4=" << b4.toString() << endl;
	b4=++b2;
	cout << "++b2=" << b2.toString() << endl;
	cout << "b4=++b2:" << " b4=" << b4.toString() << endl;

	cout << "postfix ++ operator" << endl;
	cout << "b3=" << b3.toString() << endl;
	cout << "b5=" << b5.toString() << endl;
	b5=b3++;
	cout << "b3++=" << b3.toString() << endl;
	cout << "b5=b3++:" << " b5=" << b5.toString() << endl;
	

	return 0;
}