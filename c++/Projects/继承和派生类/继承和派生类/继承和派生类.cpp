// �̳к�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>
#include<string>
using namespace std;
class Person {
protected://�ܱ������ݳ�Ա
	string name;
	char sex;
	int age;
public:
	Person(string pn, char ps, int pa) {//�Ѕ����캯��
		name = pn;
		sex = ps;
		age = pa;
	}

	void Pshow() {
		cout<<"����="<< name <<"\t"<<"�Ա�="<<sex<<"\t"<<"����="<<age<<"\t";//��ʾ�������
	}
};

class Teacher :private Person {//˽�м̳�
private:
	string title;//ְ��
public:
	Teacher(string Tn, char Ts, int Ta, string Tti) :Person(Tn, Ts, Ta) {
		title = Tti;
	}
	void Tshow() {
		Pshow();
		cout <<"��ʦְ��=" << title << endl;//
}
};

class Cadres :private Person //���м̳�
 {
private:
	string post;//ְ��
public:
	Cadres(string Cn, char Cs, int Ca, string Cp) :Person(Cn, Cs, Ca) {
		post = Cp;
	}

	void Cshow() {
		//Pshow();
		cout << "�ɲ�����=" << name << endl;
		cout << "�ɲ��Ա�=" << sex << endl;
		cout << "�ɲ�����=" << age<< endl;
		cout << "�ɲ�ְ��=" << post << endl;
}
};
int main()
{
	Person p1("zhang",'f',20);
	p1.Pshow();
	cout << endl;

	Teacher T1("zhao",'m',23,"������ʦ");
	T1.Tshow();
	
	 Cadres C1 ("li", 'f', 40,"����");
	C1.Cshow();
	system("pause");
	return 0;
}

