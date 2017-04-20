// 函数模板.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
using namespace std;

template <class T>
T area(T a, T b);

int main()
{
	int  x,y;
	double m, n;
	
	cout << "请输入长方体长和宽";
	cin >> x >> y;
	cin >> m  >>n;
	cout << "面积是：" << endl;
	cout << area(x, y) << endl;
	cout << area(m, n) << endl;
	system("pause");
    return 0;
}
template <class T>
T area(T a, T b)
{
	T c;
	c = a*b;
	return c;
}
