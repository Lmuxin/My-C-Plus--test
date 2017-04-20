// 虚函数 不执行派生类析构函数的情况.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
# include<cstring>
using namespace std;

class First {
protected:
	char *pf;
public:
	First(char *ch)
	{
		pf = new char[strlen(ch) + 1];
		strcopy(pf, ch);
		cout << "构造函数First被调用" << endl;
	}
	~First() {
		delete []pf;
		cout << "析构函数~First被调用" << endl;
	}
};
class Second :public First {
private:
	int *ps;
public:
	Second(char *ch, int n = 5, int x = 0) :First(ch) {
		ps = new int[n];
		for (int i = 0; i < n; i++)
			ps[i] = x;
		cout << "构造函数Second 被调用" << endl;
	}

	~Second() {
		delete[]ps;
		cout << "析构函数`Second被调用" << endl;
	}
};

int main()
{
	First *fptr = new Second("b001", 3, 10);
	delete fptr;
    return 0;
}

