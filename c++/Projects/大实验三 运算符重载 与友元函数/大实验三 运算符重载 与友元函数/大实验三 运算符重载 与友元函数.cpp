// 大实验三 运算符重载 与友元函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Complex
{
private:
	float real;//实部
	float imag;//虚部
public:
	Complex()//无参构造函数
	{
		real = 0.0f;
		imag = 0.0f;
	}
	Complex(float cr, float ci)//有参构造函数
	{
		real = cr;
		imag = ci;
	}
	friend Complex operator +(const Complex &c1, const Complex &c2);//以类的友元函数形式重载运算符+
	friend ostream & operator <<(ostream &, Complex &);//以类的友元函数形式重载流插入运算符<<

};

Complex operator+(const Complex & c1, const Complex & c2)//重载+函数
{
	Complex c;
	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;
	return  c;
}

ostream & operator<<(ostream &output, Complex &c)//重载<<函数
{
	if (c.real != 0)//实部不为0
	{
		if (c.imag > 0)//虚部为正
		{
			output << c.real << "+" << c.imag << "i" << endl;//i为虚数单位
		}
		else if (c.imag < 0)//虚部为负
		{
			output << c.real << c.imag << "i" << endl;
		}
		else//虚部为0
		{
			output << c.real << endl;
		}
	}
	else//实部为0
	{
		if (c.imag !=0)//虚部不为0
		{
			output << c.imag << "i" << endl;
		}
		
		else//虚部为0
		{
			output << "0"<< endl;
		}
		}
	
	return output;
	// TODO: 在此处插入 return 语句
}

int main()
{
	Complex c1(1.1f, 1.3f);
	cout << "c1=";
	cout << c1;
	cout << endl;

	Complex c2(3.1f, 4.9f);
	cout << "c2=";
	cout << c2;
	cout << endl;

	Complex c3;//默认构造函数 实部虚部都为0
	cout << "c3=";
	cout << c3;
	cout << endl;

	c3 = c1 + c2;
	cout << "c3=c1+c2=";
	cout <<c3;
	cout << endl;

    Complex c4(1.3f, -4.5f);
	cout << "c4=";
	cout << c4;
	cout << endl;

	Complex c5(-12.2f, 2.1f);
	cout << "c5=";
	cout << c5;
	cout << endl;

	Complex c6;
	c6 = c4 + c5;
	cout << "c6=c4+c5=";
	cout << c6;
	cout << endl;

	Complex c7(0, 2.1f);//实部为0，虚部不为0
	cout << "c7=";
	cout << c7;
	cout << endl;

	Complex c8(-12.2f, 0);//实部不为0，虚部为0
	cout << "c8=";
	cout << c8;
	cout << endl;

	
system("pause");
    return 0;
}

