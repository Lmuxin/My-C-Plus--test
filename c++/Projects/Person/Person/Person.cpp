// Person.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string name;
	char sex;
	int age;
public:

	Person(string pname, char psex, int page)
	{
		name = pname;
		sex = psex;
		age = page;

	}
	virtual void show()
	{
		cout << "姓名=" << name << "\t" << "性别=" << sex << "\t" << "年龄 =" << age << endl;
	}
 };
class Student :public Person
{
private:
	double score;
public:
	Student(string sname, char ssex, int sage, double sscore):Person(sname,ssex,sage)
	{
		score = sscore;
	}
	void show()

	{
		cout << "姓名=" << name << "\t" << "性别=" << sex << "\t" << "年龄 =" << age << endl;
	
		cout << "学生成绩=" << score << endl;
	} 
};
class Teacher :public Person
{
private: 
	double salary;
public:
	Teacher(string tname, char tsex, int tage, double tsalary) :Person(tname, tsex, tage)
	{
		salary = tsalary;
	}
	void show()
	{
		cout << "姓名=" << name << "\t" << "性别=" << sex << "\t" << "年龄 =" << age << endl;
	
		cout << "教师工资=" << salary << endl;
	}
};
int main()
{
	Student s("li", 'm', 20, 78.5);
	Teacher t("zhao", 'f', 60, 8000);
	Person *p[] = { &s,&t };
	for (int i = 0; i < 2; i++)
	{
		p[i]->show();
	}
	system("pause");
	return 0;
}

