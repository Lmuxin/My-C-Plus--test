// ������.cpp : �������̨Ӧ�ó������ڵ㡣
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
	
	CDate()//�޲ι��캯��

	{
		year = 2016;
		month = 11;
		day = 15;
		}
	
	CDate(int y, int m, int d){//�Ѕ����캯��
		year = y;
		month = m;
		day = d;
		 }

	CDate(const CDate &td) {//���ƹ��캯��Ϊtomorrow����ֵ

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
		cout << "��������������" << endl;
	}
	

    void PrintDate() {
		cout << year << "��";
		cout << month << "��";
		cout << day << "��"  << endl;
	}
};

int main()
{

	int year, month, day;
	cout << "��������" << endl;
	cin >> year;

	cout << "�������� " << endl;
	cin >> month;
	while(month < 1 || month>12)//������if

	{
		cout << "������·���������������" << endl;
		cin >> month;
	}

	cout << "��������" << endl;
	cin >> day;

	while(day < 1 || day>31)

	{
		cout << "���������������������" << endl;
		cin >> day;
	}
	     while(month == 2)
			 if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)


			 {
				 if (day > 29)

				 {
					 cout << "��������������������" << endl;
					 cin >> day;
				 }
			 }
			else
			{
				if (day > 28)

				{
					cout << "����������,����������" << endl;
					cin >> day;
				}
			}
		

	CDate today(year, month, day);
	cout << "�����������" << endl;
	today.PrintDate();

	CDate tomorrow = today;
	cout << "�����������" << endl;
	tomorrow.PrintDate();
	CDate da1;
	cout << "da1:" << endl;

	da1.PrintDate();
	system("pause");
	return 0;
}

