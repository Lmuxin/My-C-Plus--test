// ʵ��� ��̬���麯��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>
#define PI 3.1415
#include <cmath>
using namespace std;
class Shape//�������
{
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
};
class  Circle :public Shape {//Բ����
protected:
	double r;
public:
	Circle(double ir)//���캯��
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

class Square :public Shape {//��������
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


/*class Circle :public Shape {//Բ����
protected:
double r;//�뾶
public:
Circle(double ir)//�вι��캯��
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

class Square:public Shape {//��������
protected:
double a;
public:
Square(double ia)//�вι��캯��
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
class Rectangle :public Shape {//��������
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
class Triangle :public Shape {//��������
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
		if ((a + b) > c || (a + c) > b || (b + c) > a)//�ж��ܷ񹹳�������
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
		if ((a + b) > c || (a + c) > b || (b + c) > a)//�ж��ܷ񹹳�������
		{

			return  a + b + c;
		}
		else
			return 0;
	}

};
void printmaxarea(int n)//�����������������ĸ�ͼ��
{
	switch (n)
	{
	case 0:cout << "���������Բ" << endl; break;
	case 1:cout << "���������������" << endl; break;
	case 2:cout << "��������ǳ�����" << endl; break;
	case 3:cout << "���������������" << endl; break;

	}
}
void printmaxpeimeter(int n)//��������ܳ��������ĸ�ͼ��
{
	switch (n)
	{
	case 0:cout << "�ܳ�������Բ" << endl; break;
	case 1:cout << "�ܳ�������������" << endl; break;
	case 2:cout << "�ܳ������ǳ�����" << endl; break;
	case 3:cout << "�ܳ�������������" << endl; break;

	}
}
int main()
{

	Circle c1(3.0);
	Square s1(4);
	Rectangle r1(2.5, 3.0);
	Triangle t1(1, 2, 3);

	Shape *sh;//�����ʽһ
	sh = &c1;
	cout << "Բ�����=" << sh->area() << endl;
	cout << "Բ���ܳ�=" << sh->perimeter() << endl;
	sh = &s1;
	cout << "�����ε����=" << sh->area() << endl;
	cout << "�����ε��ܳ�=" << sh->perimeter() << endl;
	sh = &r1;
	cout << "�����ε����=" << sh->area() << endl;
	cout << "�����ε��ܳ�=" << sh->perimeter() << endl;
	sh = &t1;
	cout << "�����ε����=" << sh->area() << endl;
	cout << "�����ε��ܳ�=" << sh->perimeter() << endl;

	Shape *sh1[] = { &c1,&s1,&r1,&t1 };//�����ʽ������ָ���������ʽ���
	int i;
	for (i = 0; i < 4; i++)
	{
		cout << sh1[i]->area() << endl;
		cout << sh1[i]->perimeter() << endl;
	}


	double maxarea;
	int n = 0;
	Shape *sh2[4] = { &c1,&s1,&r1,&t1 };//Ѱ����������
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
	printmaxarea(n);//���ú���������������ĸ�ͼ��
	cout << "�������ǣ�" << maxarea << endl;//���������

	double maxper;
	int j = 0;
	maxper = sh2[0]->perimeter();
	for (i = 1; i < 4; i++)
	{
		if (maxper < sh2[i]->perimeter())//Ѱ���ܳ������
		{
			maxper = sh2[i]->perimeter();
			j = i;
		}
		else {
			maxper = maxper;
			j = j;
		}
	}
	printmaxpeimeter(j);//���ú����������ܳ������ĸ�ͼ��
	cout << "�ܳ����Ϊ��" << maxper << endl;//��������ܳ�

	system("pause");
	return 0;
}



