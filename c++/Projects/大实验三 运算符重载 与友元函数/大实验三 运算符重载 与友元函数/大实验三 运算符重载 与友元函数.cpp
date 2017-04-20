// ��ʵ���� ��������� ����Ԫ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Complex
{
private:
	float real;//ʵ��
	float imag;//�鲿
public:
	Complex()//�޲ι��캯��
	{
		real = 0.0f;
		imag = 0.0f;
	}
	Complex(float cr, float ci)//�вι��캯��
	{
		real = cr;
		imag = ci;
	}
	friend Complex operator +(const Complex &c1, const Complex &c2);//�������Ԫ������ʽ���������+
	friend ostream & operator <<(ostream &, Complex &);//�������Ԫ������ʽ���������������<<

};

Complex operator+(const Complex & c1, const Complex & c2)//����+����
{
	Complex c;
	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;
	return  c;
}

ostream & operator<<(ostream &output, Complex &c)//����<<����
{
	if (c.real != 0)//ʵ����Ϊ0
	{
		if (c.imag > 0)//�鲿Ϊ��
		{
			output << c.real << "+" << c.imag << "i" << endl;//iΪ������λ
		}
		else if (c.imag < 0)//�鲿Ϊ��
		{
			output << c.real << c.imag << "i" << endl;
		}
		else//�鲿Ϊ0
		{
			output << c.real << endl;
		}
	}
	else//ʵ��Ϊ0
	{
		if (c.imag !=0)//�鲿��Ϊ0
		{
			output << c.imag << "i" << endl;
		}
		
		else//�鲿Ϊ0
		{
			output << "0"<< endl;
		}
		}
	
	return output;
	// TODO: �ڴ˴����� return ���
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

	Complex c3;//Ĭ�Ϲ��캯�� ʵ���鲿��Ϊ0
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

	Complex c7(0, 2.1f);//ʵ��Ϊ0���鲿��Ϊ0
	cout << "c7=";
	cout << c7;
	cout << endl;

	Complex c8(-12.2f, 0);//ʵ����Ϊ0���鲿Ϊ0
	cout << "c8=";
	cout << c8;
	cout << endl;

	
system("pause");
    return 0;
}

