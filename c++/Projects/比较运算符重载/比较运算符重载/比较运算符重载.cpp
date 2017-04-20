// 比较运算符重载.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
using namespace std;
class  Fraction
{
protected:
	int num;//分子
	int deno;//分母
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
		cout << "析构函数被调用" << endl;
	}
	friend  Fraction operator  +(const Fraction & f1, const Fraction & f2);//老是说我参数太多是几个意思
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
//重载加+++++++
Fraction operator  +(const Fraction & f1, const Fraction & f2)
{
	Fraction f;
	if (f1.deno == f2.deno)
	{
		f.num = f1.num + f2.num;//分母相同时
		f.deno = f1.deno;
	}
	else {
		f.num = f1.num*f2.deno + f2.num*f1.deno;//分母不同时
		f.deno = f1.deno*f2.deno;
	}
	return f;
}

//重载减-------
Fraction operator -(const Fraction & f1, const Fraction & f2)
{
	Fraction f;
	if (f1.deno == f2.deno)
	{
		f.num = f1.num - f2.num;//分母相同时
		f.deno = f1.deno;
	}
	else
	{
		f.num = f1.num*f2.deno - f2.num*f1.deno;//分母不同时
		f.deno = f1.deno*f2.deno;
	}
	return f;
}
//重载乘*********
Fraction operator  *(const Fraction & f1, const Fraction & f2)
{
	Fraction f;
	f.num = f1.num *f2.num;
	f.deno = f1.deno*f2.deno;
	return f;
}

//重载除//////
Fraction operator  /(const Fraction & f1, const Fraction & f2)
{
	Fraction f;
	f.num = f1.num * f2.deno;
	f.deno = f1.deno*f2.num;
	return f;
}
//重载大于>>>>>>>>
bool operator  >(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//分母相等时
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
	while (f1.deno != f2.deno)//分母不等时
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



//重载小于<<<<<<<
bool operator  <(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//分母相等时
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
	while (f1.deno != f2.deno)//分母不等时
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


//重载大于等于>>>>>=====
bool operator  >=(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//分母相等时
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
	while (f1.deno != f2.deno)//分母不等时
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


//重载小于等于<<<<<=====
bool operator  <=(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//分母相等时
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
	while (f1.deno != f2.deno)//分母不等时
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


//重载等于=========
bool operator==(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//分母相等时
	{
	if (f1.num == f2.num)
	{
	return true;
	cout << "f1==f2" << endl;
	}
	else
	{
	return false;
	cout << "f1！=f2" << endl;

	}

	}
	while (f1.deno != f2.deno)//分母不等时
	{*/
	if (f1.num*f2.deno == f2.num*f1.deno)
	{
		return true;
		cout << "f1==f2" << endl;
	}
	else
	{
		return false;
		cout << "f1！=f2" << endl;
	}
}


//重载不等于！！！！！====
bool operator  !=(const Fraction & f1, const Fraction & f2)
{

	/*while (f1.deno == f2.deno)//分母相等时
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
	while (f1.deno != f2.deno)//分母不等时
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


//重载输入>>>>>
istream & operator >> (istream &input, Fraction & f)
{
	char ch = '/';
	input >> f.num >> ch >> f.deno;//分数的/如何输入呢？？？？？？？？？？？？
	return input;
}//重载输出<<<<<<<
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
	cout << "请输入f8的值：" << endl;
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
	cout << "f1与f2比较 " << (f1 > f2 ? "true" : "false") << endl;
	cout << "f2与f3比较 " << (f2< f3 ? "true" : "false") << endl;
	cout << "f3与f4比较 " << (f3 >= f4 ? "true" : "false") << endl;
	cout << "f4与f5比较 " << (f4 <= f5 ? "true" : "false") << endl;
	cout << "f5与f6比较 " << (f5 == f6 ? "true" : "false") << endl;
	cout << "f6与f7比较 " << (f6 != f7 ? "true" : "false") << endl;


	system("pause");
	return 0;
}



