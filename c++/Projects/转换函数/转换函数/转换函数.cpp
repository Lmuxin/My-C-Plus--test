// 转换函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
using namespace std;
class Circle {
private:
	double x;
	double y;
	double r;
public:
	Circle() {
		x = 0;
		y = 0;
		r = 1;
	}
	Circle(double x1, double y1, double r1) {
		x = x1;
		y = y1;
		r = r1;
}
	operator double() 
	{
		return r;

	}
	friend ostream & operator<< (ostream &, Circle &);
};
ostream & operator<<(ostream &  output, Circle &c) {
	output << "(" << c.x << "," << c.y << "," << c.r << ")";


	return output;
}
int main()
{
	Circle c1(7.2, 5.8, 10.3);
	double r2, r3, r4, r5;
	r2 = c1 + 5.7;
	r3 = c1 - 4.6;
	r4 = c1 * 3;
	r5 = c1 / 2;
	cout << "c1=" << c1 << endl;
	cout << "r2=" << r2 << endl;
	cout << "r3=" << r3 << endl;
	cout << "r4=" << r4 << endl;
	cout << "r5=" << r5 << endl;
	system("pause");
		return 0;
}

