// 转换构造函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include <iostream>
# include <string>
using namespace std;
class Complex {
private:
	double real;
	double imag;
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double r, double i) {
		real = r;
		imag = i;
	}
	Complex(Complex &c) {
		real = c.real; 
		imag = c.imag;

	}
	Complex(double r) {
		real = r;
		imag = 0;

	}
	friend Complex operator+(const Complex&c1, const Complex &c2) {
		return Complex(c1.real + c2.real, c1.imag + c2.imag);
	}
	friend ostream& operator<<(ostream &output, Complex &c)
	{
		output << c.real;
		if (c.imag > 0) 
			output << "+";
			output << c.imag << "i";

		

		if (c.imag < 0)
			output << c.imag << "i";
		return output;
	}
};


	int main() {
		Complex c1;
		Complex c2(2.5, -3.9);
		Complex c3(c2);
		Complex c4;
		Complex c5;
		c4 = c3 + 3.5;
		c5 = c2 + c4;
		cout << "c1=" << c1 << endl;
		cout << "c2=" << c2 << endl;
		cout << "c3=" << c3 << endl;
		cout << "c4=" << c4 << endl;
		cout << "c5=" << c5 << endl;
		system("pause");

		return 0;
	}
