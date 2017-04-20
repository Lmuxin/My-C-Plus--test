// Person.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "����=" << name << "\t" << "�Ա�=" << sex << "\t" << "���� =" << age << endl;
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
		cout << "����=" << name << "\t" << "�Ա�=" << sex << "\t" << "���� =" << age << endl;
	
		cout << "ѧ���ɼ�=" << score << endl;
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
		cout << "����=" << name << "\t" << "�Ա�=" << sex << "\t" << "���� =" << age << endl;
	
		cout << "��ʦ����=" << salary << endl;
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

