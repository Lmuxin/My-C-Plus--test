// ����ģ��.cpp : �������̨Ӧ�ó������ڵ㡣
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
	
	cout << "�����볤���峤�Ϳ�";
	cin >> x >> y;
	cin >> m  >>n;
	cout << "����ǣ�" << endl;
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
