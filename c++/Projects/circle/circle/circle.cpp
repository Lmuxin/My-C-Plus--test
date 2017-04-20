// circle.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
# define PI 3.1415
using namespace std;
class Circle
{
private :
	double x, y, r;
public:
	Circle()
	{
		x = 0;
		y = 0;
		r = 0;
	}
	Circle(double x1, double y2, double r1)
	{
		x = x1;
		y = y2;
		r = r1;
	}
	double area()
	{
		return PI*r*r;
	}
	friend double operator+(  Circle & , Circle & );
	friend ostream & operator <<(ostream &, const Circle &);

};
double operator+(Circle & c1, Circle & c2)
{
	double area;
	area = c1.area() + c2.area();
	return  area;
}
ostream &operator <<(ostream &output, const Circle &c)
{
	output << c.x << "\t" << c.y << "\t" << c.r << "\t"<<PI*c.r*c.r << endl;
	return output;
}
int main()
{
	double x;
	Circle a(10, 10, 3.5);
	Circle b(20, 20, 6.8);
	cout << a.area() <<endl;
	cout << b.area() << endl;
	x = a + b;
	cout << x << endl;
	cout << a;
	system("pause");
    return 0;
}

