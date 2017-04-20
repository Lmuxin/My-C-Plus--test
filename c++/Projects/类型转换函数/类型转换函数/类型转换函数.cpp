// 类型转换函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include <iostream>
# include<string>
using namespace std;
class  Complex {
private:
	double real;
	double imag;
public:
		Complex(){
		real = 0;
	    imag = 0;
	}
	Complex(double r,double i) {
		real = r;
		imag = i;
	}
	Complex(Complex &c) {
		real = c.real;
		imag = c.imag;
	}
	operator double() {
		return real;
	}

};



int main()
{
	Complex c3(2.5, 3.9);
	double d = c3 + 3.5;
	cout << d << endl;
	system("pause");
    return 0;
}

