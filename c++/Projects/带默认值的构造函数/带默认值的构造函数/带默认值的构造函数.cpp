// ��Ĭ��ֵ�Ĺ��캯��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

# include<iostream>
using namespace std;
class chang {
private:
	int length;
	int width;
public:
	chang(int le = 3, int  w = 4) {

		length = le;
		width = w;
}

	void set(int len, int wi) {

		length = len;
		width = wi;
	}

	int area() {
		int a;

		a = length*width;
		return a;
}

};

int main()
{
	chang c1;
	cout << "���" << c1.area() << endl;

	chang c2;
	cout << "���" << c2.area() << endl;
	c2.set(5, 6);
	cout << "���" << c2.area() << endl;
	system("pause");
	
	return 0;
}

