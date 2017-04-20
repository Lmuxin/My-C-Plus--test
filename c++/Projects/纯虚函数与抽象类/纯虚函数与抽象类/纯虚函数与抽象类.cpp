// ���麯���������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
# define PI 3.1415
using namespace std;
//������
class Shape
{
 public:
	virtual double perimeter() = 0;//�ܳ�
	virtual double area() = 0;//���
};
//Բ����
class Circle :public Shape
{
  protected:
	 double r;//�뾶
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
//��������
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

//��������
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
//��������
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
	cout <<"Բ���ܳ�:"<< c1.perimeter()<< "\t";
	cout<<"Բ�����:"<<c1.area()<<endl;

	Square s1(2.0);
	cout<<"�����ε��ܳ�:"<<s1.perimeter()<<"\t";
	cout << "�����ε������" << s1.area()<<endl;

	Rectangle r1(3.0, 4.0);
	cout << "�����ε��ܳ���"<<r1.perimeter()<<"\t";
	cout << "�����ε������" << r1.area() << endl;

	Triangle t1(6.0, 8.0, 10.0);
	cout<<"�����ε��ܳ�:"<<t1.perimeter()<<"\t";
	cout << "�����ε������" << t1.area()<<endl;

	int i;
	Shape *sh1[] = { &c1,&s1,&r1,&t1 };
	cout << "�ܳ��ǣ�" << endl;
	for (i = 0; i < 4; i++)
	{
		cout << sh1[i]->perimeter() << endl;
	
	}

	cout << endl;

		cout << "����ǣ�" << endl;
		Shape *sh2[] = { &c1,&s1,&r1,&t1 };
		for (i = 0; i < 4; i++)
		{cout << sh2[i]->area() << endl;
	}

		Shape *sh3;
		sh3 = &c1;
		cout << "Բ���ܳ���" << sh3->perimeter() << endl;
		cout << "Բ�������" << sh3->area() << endl;

		Shape *sh4;
		sh4 = &s1;
		cout << "�������ܳ���" << sh4->perimeter() << endl;
		cout << "�����������" << sh4->area()<<endl;

	
		double p,q;
		Shape *sh5[] = { &c1,&s1,&r1,&t1};
		p= sh5[0]->perimeter();
	for (i = 1; i < 4; i++)
	{ 
		if (sh5[0]->perimeter()< sh5[i]->perimeter())
			p = sh5[i]->perimeter();
		
	}
	cout << "�ܳ������ǣ�" << p << endl;


	cout << endl;

	Shape *sh6[]= { &c1,&s1,&r1,&t1 };
	q = sh6[0]->area();

	for (i = 1; i < 4; i++)
	{
		if (sh6[0]->area() < sh6[i]->area())
			q = sh6[i]->area();
}
	cout << "������ֵ�ǣ�" << q << endl;

	
system("pause");
    return 0;
}

