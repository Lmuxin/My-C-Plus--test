// ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>
# include <string>
using namespace std;
class teacher {
private:
	string name; 
	char sex;
	int age;
public:
	teacher(string tname, char tsex, int tage) {
		name = tname;
		sex = tsex;
		age = tage;
     }
	void display(){
		cout <<"����"<<name<<"\t"<< "�Ա�="<< sex << "\t" << "����=" << age << endl;
}
};


int main()
{
	teacher teach[3] = {
teacher("zhang",'f',20),teacher("zhao",'m',30),teacher("li",'f',21)
	};
	for (int i = 0; i <= 2; i++)
		teach[i].display();

	system("pause");
    return 0;
}

