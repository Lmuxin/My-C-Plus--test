// ����ģ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>
using  namespace std;
template <class T>
T max(T a, T b, T c);
template <class T>
T max(T a, T b);


int main()
{
	int ia, ib;
	cin >> ia >> ib;

	int iia, iib, iic;
	cin >> iia >> iib >> iic;
	cout << "�������ֵ�ǣ�" << endl;
	cout << max(ia, ib) << endl;
	cout << "�������ֵ�ǣ�" << endl;
	cout << max(iia, iib, iic) << endl;;
	system("pause");
    return 0;
}
template <class T>
T max(T a, T b)
{
	return a > b ? a : b;
}

template <class T>
T max(T a, T b, T c)
{
	T max;
	if (a > b)
	{
		max = a;
	}
	else  max = b;

	if (max > c)
	{
		max = max;
	}
	else  max = c;
	return max;

}
