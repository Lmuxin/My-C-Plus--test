// �Ƚ����������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>
using namespace std;
class  Fraction
{
protected:
	int num;//����
	int deno;//��ĸ
public:
	Fraction()
	{
		num = 5;
		deno = 6;
	}
	Fraction(int fn, int fd)
	{
		num = fn;
		deno = fd;
	}
	Fraction(const Fraction & f)
	{
		num = f.num;
		deno = f.deno;

	}

	~Fraction()
	{
		cout << "��������������" << endl;
	}
	friend  Fraction operator  +(const Fraction & f1, const Fraction & f2);//����˵�Ҳ���̫���Ǽ�����˼
	friend  Fraction operator  -(const Fraction & f1, const Fraction & f2);
	friend  Fraction operator  *(const Fraction & f1, const Fraction & f2);
	friend  Fraction operator  /(const Fraction & f1, const Fraction & f2);
	friend istream &operator >> (istream &, Fraction &);
	friend ostream &operator <<(ostream &, Fraction &);
	friend bool operator  >(const Fraction & f1, const Fraction & f2);
	friend  bool operator <(const Fraction & f1, const Fraction & f2);
	friend  bool operator >=(const Fraction & f1, const Fraction & f2);
	friend bool operator <=(const Fraction & f1, const Fraction & f2);
	friend  bool operator==(const Fraction & f1, const Fraction & f2);
	friend bool operator!=(const Fraction & f1, const Fraction & f2);


};
//���ؼ�+++++++
Fraction operator  +(const Fraction & f1, const Fraction & f2)
{
	Fraction f;
	if (f1.deno == f2.deno)
	{
		f.num = f1.num + f2.num;//��ĸ��ͬʱ
		f.deno = f1.deno;
	}
	else {
		f.num = f1.num*f2.deno + f2.num*f1.deno;//��ĸ��ͬʱ
		f.deno = f1.deno*f2.deno;
	}
	return f;
}

//���ؼ�-------
Fraction operator -(const Fraction & f1, const Fraction & f2)
{
	Fraction f;
	if (f1.deno == f2.deno)
	{
		f.num = f1.num - f2.num;//��ĸ��ͬʱ
		f.deno = f1.deno;
	}
	else
	{
		f.num = f1.num*f2.deno - f2.num*f1.deno;//��ĸ��ͬʱ
		f.deno = f1.deno*f2.deno;
	}
	return f;
}
//���س�*********
Fraction operator  *(const Fraction & f1, const Fraction & f2)
{
	Fraction f;
	f.num = f1.num *f2.num;
	f.deno = f1.deno*f2.deno;
	return f;
}

//���س�//////
Fraction operator  /(const Fraction & f1, const Fraction & f2)
{
	Fraction f;
	f.num = f1.num * f2.deno;
	f.deno = f1.deno*f2.num;
	return f;
}
//���ش���>>>>>>>>
bool operator  >(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//��ĸ���ʱ
	{
	if (f1.num > f2.num)
	{
	return true;
	cout << "f1>f2" << endl;
	}

	else if (f2.num > f1.num)
	{
	return true;
	cout << "f2>f1" << endl;
	}
	else return false;

	}
	while (f1.deno != f2.deno)//��ĸ����ʱ
	{*/
	if (f1.num*f2.deno > f2.num*f1.deno)
	{
		return true;
		cout << "f1>f2" << endl;
	}
	else if (f2.num*f1.deno > f1.num*f2.deno)
	{
		return true;
		cout << "f2>f1" << endl;
	}
	else return false;
}



//����С��<<<<<<<
bool operator  <(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//��ĸ���ʱ
	{
	if (f1.num < f2.num)
	{
	return true;
	cout << "f1<f2" << endl;
	}
	else if (f2.num < f1.num)
	{
	return true;
	cout << "f2<f1" << endl;
	}
	else return false;
	}
	while (f1.deno != f2.deno)//��ĸ����ʱ
	{*/
	if (f1.num*f2.deno < f2.num*f1.deno)
	{
		return true;
		cout << "f1<f2" << endl;
	}
	else if (f2.num*f1.deno < f1.num*f2.deno)
	{
		return true;
		cout << "f2<f1" << endl;
	}
	else return false;
}


//���ش��ڵ���>>>>>=====
bool operator  >=(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//��ĸ���ʱ
	{
	if (f1.num > f2.num||f1.num==f2.num)
	{
	return true;
	cout << "f1>=f2" << endl;
	}
	else if(f2.num>f1.num||f2.num==f2.num)
	{
	return true;
	cout << "f2>=f1" << endl;
	}

	}
	while (f1.deno != f2.deno)//��ĸ����ʱ
	{*/
	if (f1.num*f2.deno > f2.num*f1.deno || f1.num*f2.deno == f2.num*f1.deno)
	{
		return true;
		cout << "f1>=f2" << endl;
	}
	else if (f2.num*f1.deno > f1.num*f2.deno || f1.num*f2.deno == f2.num*f1.deno)
	{
		return true;
		cout << "f2>=f1" << endl;
	}
	else return false;
}


//����С�ڵ���<<<<<=====
bool operator  <=(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//��ĸ���ʱ
	{
	if (f1.num < f2.num || f1.num == f2.num)
	{
	return true;
	cout << "f1<=f2" << endl;
	}
	else if (f2.num < f1.num || f1.num == f2.num)
	{
	return true;
	cout << "f2<=f1" << endl;
	}
	else return false;
	}
	while (f1.deno != f2.deno)//��ĸ����ʱ
	{*/
	if (f1.num*f2.deno < f2.num*f1.deno || f1.num*f2.deno == f2.num*f1.deno)
	{
		return true;
		cout << "f1<=f2" << endl;
	}
	else if (f2.num*f1.deno < f1.num*f2.deno || f1.num*f2.deno == f2.num*f1.deno)
	{
		return true;
		cout << "f2<=f1" << endl;
	}
	else return false;
}


//���ص���=========
bool operator==(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//��ĸ���ʱ
	{
	if (f1.num == f2.num)
	{
	return true;
	cout << "f1==f2" << endl;
	}
	else
	{
	return false;
	cout << "f1��=f2" << endl;

	}

	}
	while (f1.deno != f2.deno)//��ĸ����ʱ
	{*/
	if (f1.num*f2.deno == f2.num*f1.deno)
	{
		return true;
		cout << "f1==f2" << endl;
	}
	else
	{
		return false;
		cout << "f1��=f2" << endl;
	}
}


//���ز����ڣ���������====
bool operator  !=(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//��ĸ���ʱ
	{
	if (f1.num != f2.num)
	{
	return true;
	cout << "f1!=f2" << endl;
	}
	else {
	return false;
	cout << "f1==f2" << endl;
	}
	}
	while (f1.deno != f2.deno)//��ĸ����ʱ
	{*/
	if (f1.num*f2.deno != f2.num*f1.deno)
	{
		return true;
		cout << "f1!=f2" << endl;
	}
	else {
		return false;
		cout << "f1==f2" << endl;
	}

}


//��������>>>>>
istream & operator >> (istream &input, Fraction & f)
{
	char ch = '/';
	input >> f.num >> ch >> f.deno;//������/��������أ�����������������������
	return input;
}//�������<<<<<<<
ostream &operator <<(ostream & output, Fraction &f)
{
	output << f.num << "/" << f.deno << endl;
	return output;
}


int main()
{

	Fraction f1, f2(3, 6), f3, f4, f5, f6, f7, f8;
	f3 = f2;
	f4 = f2 + f3;
	f5 = f1 - f2;
	f6 = f1 / f2;
	f7 = f2*f1;
	cout << "������f8��ֵ��" << endl;
	cin >> f8;
	f2 > f3;

	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;
	cout << "f4=" << f4 << endl;
	cout << "f5=" << f5 << endl;
	cout << "f6=" << f6 << endl;
	cout << "f7=" << f7 << endl;
	cout << "f8=" << f8 << endl;
	cout << "f1��f2�Ƚ� " << (f1 > f2 ? "true" : "false") << endl;
	cout << "f2��f3�Ƚ� " << (f2< f3 ? "true" : "false") << endl;
	cout << "f3��f4�Ƚ� " << (f3 >= f4 ? "true" : "false") << endl;
	cout << "f4��f5�Ƚ� " << (f4 <= f5 ? "true" : "false") << endl;
	cout << "f5��f6�Ƚ� " << (f5 == f6 ? "true" : "false") << endl;
	cout << "f6��f7�Ƚ� " << (f6 != f7 ? "true" : "false") << endl;


	system("pause");
	return 0;
}



