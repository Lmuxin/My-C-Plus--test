// 日期类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include <iostream>
using namespace std;


class CDate
{  private:
	int year;
	int month;
	int day;
public:
	
	CDate()//无参构造函数

	{
		year = 2016;
		month = 11;
		day = 15;
		}
	
	CDate(int y, int m, int d){//有參构造函数
		year = y;
		month = m;
		day = d;
		 }

	CDate(const CDate &td) {//复制构造函数为tomorrow赋初值

		year = td.year;
		month = td.month;
		day = td.day;

		switch (month)
		{
		case 2:if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
			if (day <= 28)
				day += 1;
			else {
				month += 1; day = day + 1 - 29;
			}
		}

			   else {
				if (day <= 27)
					day += 1;
				else { month += 1; day = day + 1 - 28; }
		}
		break;
	


		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:if (day <= 30)
			day += 1;
				else { month += 1; day = day + 1 - 31; }
				break;
		case 12:if (day <= 30)
			        day += 1;
				else { year += 1; month += 1 - 12; day = day + 1 - 31; }
				break;
		case 4:
		case 6:
		case 9:
		case 11:if (day <= 29)
			day += 1;
				else { month += 1; day = day + 1 - 30; }
				break;
		

		}
	}


	~CDate()
	{
		cout << "析构函数被调用" << endl;
	}
	

    void PrintDate() {
		cout << year << "年";
		cout << month << "月";
		cout << day << "日"  << endl;
	}
};

int main()
{

	int year, month, day;
	cout << "请输入年" << endl;
	cin >> year;

	cout << "请输入月 " << endl;
	cin >> month;
	while(month < 1 || month>12)//不能用if

	{
		cout << "输入的月份有误，请重新输入" << endl;
		cin >> month;
	}

	cout << "请输入日" << endl;
	cin >> day;

	while(day < 1 || day>31)

	{
		cout << "输入的日有误，请重新输入" << endl;
		cin >> day;
	}
	     while(month == 2)
			 if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)


			 {
				 if (day > 29)

				 {
					 cout << "输入日有误，请重新输入" << endl;
					 cin >> day;
				 }
			 }
			else
			{
				if (day > 28)

				{
					cout << "输入日有误,请重新输入" << endl;
					cin >> day;
				}
			}
		

	CDate today(year, month, day);
	cout << "输出今天日期" << endl;
	today.PrintDate();

	CDate tomorrow = today;
	cout << "输出明天日期" << endl;
	tomorrow.PrintDate();
	CDate da1;
	cout << "da1:" << endl;

	da1.PrintDate();
	system("pause");
	return 0;
}

