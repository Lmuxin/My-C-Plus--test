// date.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class TDate
{
private:
	int year;
	int month;
	int day;
public:
	TDate()
	{
		year = 2013;
		month = 5;

		day = 19;

	}
	TDate(int yy, int mm, int dd):year(yy),month(mm),day(dd){}
	TDate(TDate & t)
	{
		year = t.year;
		month = t.month;
		day = t.day;
	}
	~TDate()
	{
		cout << "析构函数被调用" << endl;
	}
	void set(int ye, int mo, int da)
	{
		year = ye;
		day = da;
		month = mo;
	}
	friend void display(TDate &t1);

};

void display(TDate &t1)
{
	cout << "年=" << t1.year << endl;
	cout<< "月=" << t1.month << endl;
	cout<< "日=" <<t1.day << endl;
}

int main()
{
    return 0;
}

