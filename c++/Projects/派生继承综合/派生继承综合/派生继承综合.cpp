// �����̳��ۺ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

# include<iostream>
# include<string>
using namespace std;
class Person {//person��
protected:
	string name;
	char sex;
	int age;
	int ID;//���֤��
	string adress;//��ͥסַ
public:
	Person(string Pn, char Ps, int Pag, int PID, string Pad) {//�Ѕ����캯��
		name = Pn;
		sex = Ps;
		age = Pag;
		ID = PID;
		adress = Pad;
	}
	void Pshow() {//��ʾ�������

		cout << "����=" << name << "\t" << "�Ա�=" << sex << "\t" << "����=" << age << "\t" << "���֤��=" << ID << "\t" << "��ͥסַ=" << adress << "\t";
	}
};

class Student :public Person {//�����ѧ����
protected:
	int NOstudent;//ѧ��ѧ��
public:
	Student(string Sn, char Ss, int Sag, int SID, string Sad, int SNO) :Person(Sn, Ss, Sag, SID, Sad) {//����ʼ����Ĺ��캯��
		NOstudent = SNO;
	}
	void Sshow() {
		Pshow();
		cout << "ѧ��ѧ��=" << NOstudent << endl;
	}
};

class GStudent :public  Student {// �о�����
protected:
	int NOGStudent;//�о���ѧ��
	string special;//רҵ
public:
	GStudent(string GSn, char GSs, int GSag, int GSID, string GSad, int GSNO, string GSsp)://Person(GSn,GSs,GSag,GSID,GSad),
		Student(GSn, GSs, GSag, GSID, GSad, GSNO) {
		NOGStudent = GSNO;
		special = GSsp;
	}
	void GSshow() {
		Sshow();
		cout << "�о���ѧ��=" << NOGStudent << "\t" << "�о���רҵ=" << special << endl;
	}

};
class Employee:public Person{//�����ְ����

protected:
	int NOEmployee;//ְ����
	double wage;//����
public:
	Employee(string En, char Es, int Eag, int EID, string Ead, int ENOE, double Ew) :Person(En, Es, Eag, EID, Ead) {

		NOEmployee = ENOE;
		wage = Ew;
	}
	void Eshow() {

		Pshow();
		cout << "ְ����=" << NOEmployee << "\t" << "ְ����=" << wage << endl;
	}
};

class EGStudent :public Employee, public GStudent {// ��ְ�о�����
protected:
	int NOEGStudent;//��ְ�о���ѧ��
	string special;//��ְ�о���רҵ
public:
	EGStudent(string EGSn, char EGSs, int EGSag, int EGSID, string EGSad, int EGSNOE, double EGSw, int EGSNO,
		string EGSsp ):/*Person(EGSn,EGSs,EGSag,EGSID,EGSad),Student(EGSn, EGSs, EGSag, EGSID, EGSad, EGSNO),*/Employee(EGSn,EGSs, EGSag, EGSID, EGSad, EGSNOE, EGSw),GStudent(EGSn,EGSs, EGSag, EGSID, EGSad, EGSNO, EGSsp) {
		NOEGStudent = EGSNO;
		special = EGSsp;

	}
	void EGSshow() {
		Eshow();
		GSshow();
		cout << "ְ����=" << NOEmployee << "\t";
		cout << "ְ������=" << wage << "\t";
		cout << "��ְ�о���ѧ��=" << NOEGStudent << "\t";
		cout << "��ְ�о���רҵ=" << special << endl;


	}
};

int main()
{
	Person P1("�°���", 'm', 40, 341221, "�����׹�");
	P1.Pshow();
	cout << endl;

	Student S1("li",'m',18,341222, "����", 111);
	S1.Sshow();

	GStudent GS1("��С��", 'f', 20, 422111, "�Ͼ�", 111,"����");
	GS1.GSshow();
	Employee E1("�Ը�", 'm', 32, 321114, "����",113, 5000);
	E1.Eshow();
	EGStudent EGS1("zhao",'f',21, 432111, "����", 321, 4000, 112, "��ѧ");
	EGS1.EGSshow();


	system("pause");
		return 0;
}



