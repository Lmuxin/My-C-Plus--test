// �麯�� ��ִ���������������������.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "���캯��First������" << endl;
	}
	~First() {
		delete []pf;
		cout << "��������~First������" << endl;
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
		cout << "���캯��Second ������" << endl;
	}

	~Second() {
		delete[]ps;
		cout << "��������`Second������" << endl;
	}
};

int main()
{
	First *fptr = new Second("b001", 3, 10);
	delete fptr;
    return 0;
}

