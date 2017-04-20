// 函数与函数模板重载.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
using namespace std;
template <class T>
T compara(T a, T b);
Circle max(Circle c1, Circle c2);
struct Circle {
	int x;
	int y;
	int r;
};

int main()
{
	
	struct Circle c1(1);


    return 0;
}
template <class T>
T compara(T a, T b)
{
	return a > b ? a : b;
}

Circle max(Circle c1, Circle c2) {
	return (c1.x > c2.x ? c1.x : c2.x);
}