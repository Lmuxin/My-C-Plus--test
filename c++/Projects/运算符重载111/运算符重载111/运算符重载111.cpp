// 运算符重载111.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
# include<string>
using namespace std;
class CarSales {
protected:
	string car_num;//汽车代码、编号
	double car_price;//汽车价格
	int car_units;//销售数量
public:
	//无参构造函数
	CarSales() {
		car_num = "";
		car_price = 0;
		car_units = 0;

	}


	//有参构造函数
	CarSales(string cn, double cp, int cu) {
		car_num = cn;
		car_price = cp;
		car_units = cu;
	}
	//重载+
	CarSales operator +(const CarSales &c2)
	{
		CarSales c1;
		c1.car_num = car_num;
		c1.car_price = car_price;
		c1.car_units = car_units + c2.car_units;
		return c1;
	}
	//重载—
	CarSales operator -(const CarSales &c2)
	{
		CarSales c1;
		c1.car_num = car_num;
		c1.car_price = car_price;
		c1.car_units = car_units - c2.car_units;
		return c1;
	}

	//友元函数重载++
	friend CarSales & operator ++(CarSales &c);
	friend CarSales & operator ++(CarSales &cc,int q);


	//友元函数重载>>

	friend istream &operator >> (istream &, CarSales &);

	//友元函数重载<<
	friend ostream &operator<<(ostream &, CarSales &);
};


//重载++函数定义

CarSales & operator ++(CarSales &c,int q)
{


	++c.car_units;
	return c;
}
CarSales & operator ++(CarSales &cc)
{


	++cc.car_units;
	return cc;
}

//重载>>函数定义
istream &operator >> (istream &input, CarSales&c)
{
	input >> c.car_num >> c.car_price >> c.car_units;
	return input;
}
//重载<<函数定义
ostream &operator<<(ostream &output, CarSales &c)
{
	output << c.car_num << "\t" << c.car_price << "\t" << c.car_units << endl;
	return output;
}
int main()
{
	CarSales c1, c2, c3, c4, c5, c6;
	cout << "请输入c1的值：";
	cin >> c1;
	cout << "请输入c2的值：";
	cin >> c2;
	cout << "c1=" << c1 << endl;
	cout << "c2=" << c2 << endl;
	c3 = c1 + c2;
	cout << "c3=" << c3 << endl;
	c4 = c1 - c2;
	cout << "c4=" << c4 << endl;
	c5 = ++c3;
	cout << "c5=" << c5 << endl;
	c6 = c5++;
	cout << "c6=" << c6 << endl;
	system("pause");
	return 0;
}



