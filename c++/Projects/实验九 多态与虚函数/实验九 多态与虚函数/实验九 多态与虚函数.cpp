// 实验九 多态与虚函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
#define PI 3.1415
#include <cmath>
using namespace std;
class Shape//抽象基类
{
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
};
class  Circle :public Shape {//圆形类
protected:
	double r;
public:
	Circle(double ir)//构造函数
	{
		r = ir;
	}
	virtual double area()
	{
		return PI*r*r;
	}
	virtual double perimeter()
	{
		return 2 * PI*r;
	}
};

class Square :public Shape {//正方形类
protected:
	double a;
public:
	Square(double ia)
	{
		a = ia;
	}
	virtual double area()
	{
		return a*a;

	}
	virtual double perimeter()
	{
		return 4 * a;
	}
};


/*class Circle :public Shape {//圆形类
protected:
double r;//半径
public:
Circle(double ir)//有参构造函数
{
r = ir;
}
virtual double area()
{
return PI*r*r;
}
virtual double peimeter()
{
return 2 * PI*r;
}

};

class Square:public Shape {//正方形类
protected:
double a;
public:
Square(double ia)//有参构造函数
{
a = ia;

}
virtual double area()
{
return a*a;
}
virtual double peimeter()
{
return 4 * a;
}
};*/
class Rectangle :public Shape {//长方形类
protected:
	double a, b;
public:
	Rectangle(double ia, double ib)
	{
		a = ia;
		b = ib;
	}
	virtual double area()
	{
		return a*b;
	}
	virtual double perimeter()
	{
		return 2 * (a + b);

	}

};
class Triangle :public Shape {//三角形类
protected:
	double a, b, c;
public:
	Triangle(double ia, double ib, double ic)
	{
		a = ia;
		b = ib;
		c = ic;
	}
	virtual double area()
	{
		if ((a + b) > c || (a + c) > b || (b + c) > a)//判断能否构成三角形
		{
			double s;
			s = (a + b + c) / 2;
			return  sqrt(s*(s - a)*(s - b)*(s - c));
		}
		else
			return 0;
	}
	virtual double perimeter()
	{
		if ((a + b) > c || (a + c) > b || (b + c) > a)//判断能否构成三角形
		{

			return  a + b + c;
		}
		else
			return 0;
	}

};
void printmaxarea(int n)//函数输出面积最大的是哪个图形
{
	switch (n)
	{
	case 0:cout << "面积最大的是圆" << endl; break;
	case 1:cout << "面积最大的是正方形" << endl; break;
	case 2:cout << "面积最大的是长方形" << endl; break;
	case 3:cout << "面积最大的是三角形" << endl; break;

	}
}
void printmaxpeimeter(int n)//函数输出周长最大的是哪个图形
{
	switch (n)
	{
	case 0:cout << "周长最大的是圆" << endl; break;
	case 1:cout << "周长最大的是正方形" << endl; break;
	case 2:cout << "周长最大的是长方形" << endl; break;
	case 3:cout << "周长最大的是三角形" << endl; break;

	}
}
int main()
{

	Circle c1(3.0);
	Square s1(4);
	Rectangle r1(2.5, 3.0);
	Triangle t1(1, 2, 3);

	Shape *sh;//输出方式一
	sh = &c1;
	cout << "圆的面积=" << sh->area() << endl;
	cout << "圆的周长=" << sh->perimeter() << endl;
	sh = &s1;
	cout << "正方形的面积=" << sh->area() << endl;
	cout << "正方形的周长=" << sh->perimeter() << endl;
	sh = &r1;
	cout << "长方形的面积=" << sh->area() << endl;
	cout << "长方形的周长=" << sh->perimeter() << endl;
	sh = &t1;
	cout << "三角形的面积=" << sh->area() << endl;
	cout << "三角形的周长=" << sh->perimeter() << endl;

	Shape *sh1[] = { &c1,&s1,&r1,&t1 };//输出方式二，以指针数组的形式输出
	int i;
	for (i = 0; i < 4; i++)
	{
		cout << sh1[i]->area() << endl;
		cout << sh1[i]->perimeter() << endl;
	}


	double maxarea;
	int n = 0;
	Shape *sh2[4] = { &c1,&s1,&r1,&t1 };//寻找面积最大者
	maxarea = sh2[0]->area();
	for (i = 0; i < 4; i++)
	{
		if (maxarea < sh2[i]->area())
		{
			maxarea = sh2[i]->area();
			n = i;
		}

		else {
			maxarea = maxarea;
			n = n;
		}
	}
	printmaxarea(n);//调用函数输出面积最大是哪个图形
	cout << "面积最大是：" << maxarea << endl;//输出最大面积

	double maxper;
	int j = 0;
	maxper = sh2[0]->perimeter();
	for (i = 1; i < 4; i++)
	{
		if (maxper < sh2[i]->perimeter())//寻找周长最大者
		{
			maxper = sh2[i]->perimeter();
			j = i;
		}
		else {
			maxper = maxper;
			j = j;
		}
	}
	printmaxpeimeter(j);//调用函数输出最大周长的是哪个图形
	cout << "周长最大为：" << maxper << endl;//输出最大的周长

	system("pause");
	return 0;
}



