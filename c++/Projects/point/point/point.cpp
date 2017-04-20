// point.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Point

{
protected:
	double x;
	double y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(double x1, double y1)
	{
		x = x1;
		y = y1;

	}
	Point operator +(const Point &p1)
	{
		Point p;
		p.x = x + p1.x;
		p.y = y + p1.y;
		return p;
	}
	void get(Point &p)
	{
		double a, b;
		a = p.x;
		b = p.y;
		cout << a << endl;
		cout << b << endl;
	}
	void show()
	{
		cout << "横坐标是" << x << "\t";
		cout << "纵坐标是" << y << endl;
	}
	virtual void showshape()
	{
		cout << "this is a point" << endl;
	}
};
class Circle :public Point
{ private:
	double r;
public :
	Circle()
	{
		x = 0;
		y = 0;
		r = 0;
	}
	Circle(double x1, double y1, double r1) :Point(x1, y1), r(r1) {

	}
	virtual void showshape()
	{
		cout << "this is a Circle" << endl;
	}
	friend ostream & operator <<(ostream  &, Circle &);

};
ostream & operator <<(ostream & output, Circle &c)
{
	output << c.x << "\t" << c.y << "\t" << c.r << endl;
	return output;
}
int main()
{
	Point p1(2, 3);
	Point p2(4, 6);
	Point p3;
	p3 = p1 + p2;
	p1.show();
	p1.showshape();
	p2.show(); 
	p2.showshape();
	p3.show();
	p3.showshape();
	Circle c(3, 4, 5);
	cout << c;
	c.showshape();
	system("pause");
    return 0;
}

