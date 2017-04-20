// 带默认值的构造函数.cpp : 定义控制台应用程序的入口点。
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
	cout << "面积" << c1.area() << endl;

	chang c2;
	cout << "面积" << c2.area() << endl;
	c2.set(5, 6);
	cout << "面积" << c2.area() << endl;
	system("pause");
	
	return 0;
}

