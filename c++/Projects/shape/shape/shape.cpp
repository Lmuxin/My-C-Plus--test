// shape.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
public:
	virtual float area() = 0;
};

class Triangle :public Shape
{
private:
	float a, b, c;
public:
	Triangle(float a1, float b2, float c3)
	{
		a = a1;
		b = b2;
		c = c3;
	}
	virtual float area()

	{
		if (a + b < c || a + c < b || b + c < a)
		{
			cout << "不能构成三角形" << endl;
			return 0;
		}

		else
		{
			float s = (a + b + c) / 2;
			return sqrt(s*(s - a)*(s - b)*(s - c));

		}
	}
};
	class Rectangle :public Shape
	{
	private:
		float x, y;
	public:
		Rectangle(float x1, float y2)
		{
			x = x1;
			y = y2;
		}
		virtual float area()
		{
			return x*y;


		}
	};
	float total(Shape *sh[], int n)
	{
		float sum = 0;

		for (int i = 0; i < n; i++)
			sum += sh[i]->area();
		return sum;;
	}


int main()
{
	Triangle t(3, 4, 5);
	Rectangle r(4, 5);
	Shape *p[2] = { &t,&r };
	total(p, 2);
	cout << t.area() << endl;
	cout << r.area() << endl;;
	cout << total(p, 2);
	system("pause");
    return 0;
}

