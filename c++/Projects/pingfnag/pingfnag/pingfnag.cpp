// pingfnag.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int i, p = 1, s = 1;
	for (i = 1; i < 11; i++)
	{
		p *= 3;
		s = +p;
	}
    return 0;
}

