// const������Ա.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "��ʦ����" << name << endl;
		cout << "��ʦ�Ա�" << age << "\t";
		cout << "���̿γ�" << course << endl;
}


};


int main()

{
	teacher t1("zhang", 20, "���ݽṹ");
	const teacher t2=t1;
	t1.display();
	t2.display();
	t1.set(23, "����ϵͳ");
	t1.display();
	/*t2.set("zhao", 21, "��ѧ");
	t2.display();*/
	system("pause");
    return 0;
}

