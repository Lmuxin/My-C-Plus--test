// const变量成员.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
# include <string>
using namespace std;
class teacher {
private:
	const string name;
	string course;
	int age;
public:
	teacher(string tname, int tage, string tcourse) :name(tname) {
		age = tage;
		course = tcourse;
}

	teacher(const teacher &t):name(t.name) {
		age = t.age;
		course = t.course;
	}
	void set(int ta, string cou) {
		age = ta;
		course = cou;

	}
	void display()const {
		cout << "教师姓名" << name << endl;
		cout << "教师性别" << age << "\t";
		cout << "所教课程" << course << endl;
}


};


int main()

{
	teacher t1("zhang", 20, "数据结构");
	const teacher t2=t1;
	t1.display();
	t2.display();
	t1.set(23, "操作系统");
	t1.display();
	/*t2.set("zhao", 21, "数学");
	t2.display();*/
	system("pause");
    return 0;
}

