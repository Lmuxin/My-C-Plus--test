// ���������111.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>
# include<string>
using namespace std;
class CarSales {
protected:
	string car_num;//�������롢���
	double car_price;//�����۸�
	int car_units;//��������
public:
	//�޲ι��캯��
	CarSales() {
		car_num = "";
		car_price = 0;
		car_units = 0;

	}


	//�вι��캯��
	CarSales(string cn, double cp, int cu) {
		car_num = cn;
		car_price = cp;
		car_units = cu;
	}
	//����+
	CarSales operator +(const CarSales &c2)
	{
		CarSales c1;
		c1.car_num = car_num;
		c1.car_price = car_price;
		c1.car_units = car_units + c2.car_units;
		return c1;
	}
	//���ء�
	CarSales operator -(const CarSales &c2)
	{
		CarSales c1;
		c1.car_num = car_num;
		c1.car_price = car_price;
		c1.car_units = car_units - c2.car_units;
		return c1;
	}

	//��Ԫ��������++
	friend CarSales & operator ++(CarSales &c);
	friend CarSales & operator ++(CarSales &cc,int q);


	//��Ԫ��������>>

	friend istream &operator >> (istream &, CarSales &);

	//��Ԫ��������<<
	friend ostream &operator<<(ostream &, CarSales &);
};


//����++��������

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

//����>>��������
istream &operator >> (istream &input, CarSales&c)
{
	input >> c.car_num >> c.car_price >> c.car_units;
	return input;
}
//����<<��������
ostream &operator<<(ostream &output, CarSales &c)
{
	output << c.car_num << "\t" << c.car_price << "\t" << c.car_units << endl;
	return output;
}
int main()
{
	CarSales c1, c2, c3, c4, c5, c6;
	cout << "������c1��ֵ��";
	cin >> c1;
	cout << "������c2��ֵ��";
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



