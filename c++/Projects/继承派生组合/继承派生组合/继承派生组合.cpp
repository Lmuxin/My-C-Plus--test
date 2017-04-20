// �̳��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include <iostream>
# include <string>
#include <fstream>
using namespace std;
fstream fout("destructor.txt", ios::app);

class Birthday// ������
{
protected:
	int year;
	int month;
	int day;
public:
	Birthday()
	{//�޲�������
		year = 1996;
		month = 10;
		day = 12;
	}

	Birthday(int y, int m, int d)
	{//�вι��캯��
		year = y;
		month = m;
		day = d;

	}
	/*Birthday(int yea = 1990, int mon = 11, int da = 23)
	{//��Ĭ��ֵ�Ĺ��캯��
		year = yea;
		month = mon;
		day = da;
	}*/

/*	Birthday(int y, int m, int d) :year(y), month(m)
	{//����ʼ����Ĺ��캯��
		day = d;

	}*/
	Birthday(const Birthday &b)
	{//���ƹ��캯��
		year = b.year;
		month = b.month;
		day = b.day;
	}
	~Birthday() {
		fout << "Birthday ����������������" << endl;//��������
	}


	void Bset(int ye, int mo, int da)
	{//���ú���
		year = ye;
		month = mo;
		day = da;
	}


	void Bshow() {
		cout << "�����ǣ�" << endl;//��ʾ����
		cout << "year=" << year << "\t" << "month=" << month << "\t" << "day=" << day << endl;
	}
};

class Teacher//��ʦ��
{
protected:
	string name;
	char sex;
	int age;
public:
	Teacher() {
		name = "zhao";
		sex = 'm';
		age = 20;

	}
	Teacher(string Tn, char Ts, int Ta) {
		name = Ta;
		sex = Ts;
		age = Ta;
	}
	/*Teacher(string Tn = "li", char Ts = 'f', int Ta = 31) {
		name = Tn;
		sex = Ts;
		age = Ta;
	}*/
	/*Teacher(string Tn, char Ts, int Ta) :name(Tn), sex(Ts) {
		age = Ta;
	}*/
	Teacher(const Teacher &t) {
		name = t.name;
		sex = t.sex;
		age = t.age;
	}
	~Teacher() {
		fout << "Teacher ����������������" << endl;
	}
	void Tset(string n, char s, int a) {
		name = n;
		sex = s;
		age = a;
	}

	void  Tshow() {
		cout << "��ʦ��Ϣ��" << endl;
		cout << "����=" << name << "\t" << "�Ա�=" << sex << "\t" << "����" << age << endl;
	}
};

class Professor :public Teacher {// ������
private:
	Birthday b;//��������� ��Ϊ���������ݳ�Ա
public:
	Professor(string n, char s, int a, int y, int m, int d) :Teacher(n, s, a), b(y, m, d)
	{
	}
	
	Professor() {//�޲ι��캯��
		name = "an";
		sex = 'm';
		age = 21;
		b.Bset(1998, 12, 14);
	}

	
	
	void changebirthday() {
		int fyear, fmonth, fday;//�ı������պ���
		cout << "����������" << endl;
		cin >> fyear;
		cin >> fmonth;
		cin >> fday;
		b.Bset(fyear, fmonth, fday);
		}

~Professor() {
		fout << "Professor�����������������" << endl;
	}
	void Pshow() {
		cout << "������Ϣ��" << endl;
		cout << "����=" << name << "\t" << "�Ա�=" << sex << "\t" << "����" << age << endl;
	     b.Bshow();
		
	}
};
int main()
{
	Birthday b1,b2;
	cout << "b1:";
	b1.Bshow();
	cout << endl;
	
    b2.Bset(1997, 11, 13);
	cout << "b2:";
	b2.Bshow();
	cout << endl;

    Birthday b3=b1;
	cout << "b3:";
	b3.Bshow();
	cout << endl;

    Birthday b4(b2);
	cout << "b4:";
    b3.Bshow();
	cout << endl;
	
	Teacher t1, t2;
	cout << "t1:";
	t1.Tshow();
	cout << endl;

  t2.Tset("li",'m',29);
  cout << "t2:";
  t2.Tshow();
  cout << endl;

  Teacher t3(t2);
  cout << "t3:";
  t3.Tshow();
  cout << endl;

  Professor p1;
  cout << "p1:";
  p1.Pshow();
  cout << endl;

 Professor p2("zhang",'f', 24, 1987, 6, 1);
 cout << "p2:";
 p2.Pshow();
 cout << endl;


 Professor p3;
  p3.changebirthday();
  cout << "p3:";
  p3.Pshow();
  cout << endl;


  system("pause");
	return 0;
}


