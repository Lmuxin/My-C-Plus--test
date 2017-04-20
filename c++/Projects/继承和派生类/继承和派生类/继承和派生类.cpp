// 继承和派生类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
#include<string>
using namespace std;
class Person {
protected://受保护数据成员
	string name;
	char sex;
	int age;
public:
	Person(string pn, char ps, int pa) {//有參构造函数
		name = pn;
		sex = ps;
		age = pa;
	}

	void Pshow() {
		cout<<"姓名="<< name <<"\t"<<"性别="<<sex<<"\t"<<"年龄="<<age<<"\t";//显示输出函数
	}
};

class Teacher :private Person {//私有继承
private:
	string title;//职称
public:
	Teacher(string Tn, char Ts, int Ta, string Tti) :Person(Tn, Ts, Ta) {
		title = Tti;
	}
	void Tshow() {
		Pshow();
		cout <<"教师职称=" << title << endl;//
}
};

class Cadres :private Person //公有继承
 {
private:
	string post;//职务
public:
	Cadres(string Cn, char Cs, int Ca, string Cp) :Person(Cn, Cs, Ca) {
		post = Cp;
	}

	void Cshow() {
		//Pshow();
		cout << "干部姓名=" << name << endl;
		cout << "干部性别=" << sex << endl;
		cout << "干部年龄=" << age<< endl;
		cout << "干部职务=" << post << endl;
}
};
int main()
{
	Person p1("zhang",'f',20);
	p1.Pshow();
	cout << endl;

	Teacher T1("zhao",'m',23,"语文老师");
	T1.Tshow();
	
	 Cadres C1 ("li", 'f', 40,"军长");
	C1.Cshow();
	system("pause");
	return 0;
}

