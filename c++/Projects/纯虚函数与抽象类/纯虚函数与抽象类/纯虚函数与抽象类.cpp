// 纯虚函数与抽象类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
# define PI 3.1415
using namespace std;
//抽象类
class Shape
{
 public:
	virtual double perimeter() = 0;//周长
	virtual double area() = 0;//面积
};
//圆形类
class Circle :public Shape
{
  protected:
	 double r;//半径
  public:
	Circle(double cr) {
		r = cr;
	}
	virtual double perimeter()
	{
		return 2 * PI*r;
	}
	virtual double area()
	{
		return PI*r*r;
	}
};
//正方形类
class Square:public Shape
{
   protected:
	   double a;
public:
	Square(double sa)
	{
		a = sa;
	}
	virtual double perimeter()
	{
		return 4 * a;
	}
	virtual double area()
	{
		return a*a;
	}
};

//长方形类
class Rectangle :public Shape
{
protected:
	double m;
	double n;
public:
	Rectangle(double rm,double rn)
	{
		m = rm;
		n = rn;
	}
	virtual double perimeter()
	{
		return 2 * (m + n);
	}
	virtual double area()
	{
		return m*n;
	}
};
//三角形类
class Triangle:public Shape
{
protected:
	double x, y, z;
public:
	Triangle(double tx, double ty, double tz)
	{
		x = tx;
		y = ty;
		z = tz;
	}
	virtual double perimeter()
	{
		return x + y + z;
	}
	virtual double area()
	{
		double s;
		s = (x + y + z) / 2;
		return sqrt(s*(s - x)*(s - y)*(s - z));
	}
};
int main()
{
	Circle c1(1.0);
	cout <<"圆的周长:"<< c1.perimeter()<< "\t";
	cout<<"圆的面积:"<<c1.area()<<endl;

	Square s1(2.0);
	cout<<"正方形的周长:"<<s1.perimeter()<<"\t";
	cout << "正方形的面积：" << s1.area()<<endl;

	Rectangle r1(3.0, 4.0);
	cout << "长方形的周长："<<r1.perimeter()<<"\t";
	cout << "长方形的面积：" << r1.area() << endl;

	Triangle t1(6.0, 8.0, 10.0);
	cout<<"三角形的周长:"<<t1.perimeter()<<"\t";
	cout << "三角形的面积：" << t1.area()<<endl;

	int i;
	Shape *sh1[] = { &c1,&s1,&r1,&t1 };
	cout << "周长是：" << endl;
	for (i = 0; i < 4; i++)
	{
		cout << sh1[i]->perimeter() << endl;
	
	}

	cout << endl;

		cout << "面积是：" << endl;
		Shape *sh2[] = { &c1,&s1,&r1,&t1 };
		for (i = 0; i < 4; i++)
		{cout << sh2[i]->area() << endl;
	}

		Shape *sh3;
		sh3 = &c1;
		cout << "圆的周长：" << sh3->perimeter() << endl;
		cout << "圆的面积：" << sh3->area() << endl;

		Shape *sh4;
		sh4 = &s1;
		cout << "正方形周长：" << sh4->perimeter() << endl;
		cout << "正方形面积：" << sh4->area()<<endl;

	
		double p,q;
		Shape *sh5[] = { &c1,&s1,&r1,&t1};
		p= sh5[0]->perimeter();
	for (i = 1; i < 4; i++)
	{ 
		if (sh5[0]->perimeter()< sh5[i]->perimeter())
			p = sh5[i]->perimeter();
		
	}
	cout << "周长最大的是：" << p << endl;


	cout << endl;

	Shape *sh6[]= { &c1,&s1,&r1,&t1 };
	q = sh6[0]->area();

	for (i = 1; i < 4; i++)
	{
		if (sh6[0]->area() < sh6[i]->area())
			q = sh6[i]->area();
}
	cout << "面积最大值是：" << q << endl;

	
system("pause");
    return 0;
}

