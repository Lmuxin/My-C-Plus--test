// 派生继承综合.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

# include<iostream>
# include<string>
using namespace std;
class Person {//person类
protected:
	string name;
	char sex;
	int age;
	int ID;//身份证号
	string adress;//家庭住址
public:
	Person(string Pn, char Ps, int Pag, int PID, string Pad) {//有參构造函数
		name = Pn;
		sex = Ps;
		age = Pag;
		ID = PID;
		adress = Pad;
	}
	void Pshow() {//显示输出函数

		cout << "姓名=" << name << "\t" << "性别=" << sex << "\t" << "年龄=" << age << "\t" << "身份证号=" << ID << "\t" << "家庭住址=" << adress << "\t";
	}
};

class Student :public Person {//虚基类学生类
protected:
	int NOstudent;//学生学号
public:
	Student(string Sn, char Ss, int Sag, int SID, string Sad, int SNO) :Person(Sn, Ss, Sag, SID, Sad) {//带初始化表的构造函数
		NOstudent = SNO;
	}
	void Sshow() {
		Pshow();
		cout << "学生学号=" << NOstudent << endl;
	}
};

class GStudent :public  Student {// 研究生类
protected:
	int NOGStudent;//研究生学号
	string special;//专业
public:
	GStudent(string GSn, char GSs, int GSag, int GSID, string GSad, int GSNO, string GSsp)://Person(GSn,GSs,GSag,GSID,GSad),
		Student(GSn, GSs, GSag, GSID, GSad, GSNO) {
		NOGStudent = GSNO;
		special = GSsp;
	}
	void GSshow() {
		Sshow();
		cout << "研究生学号=" << NOGStudent << "\t" << "研究生专业=" << special << endl;
	}

};
class Employee:public Person{//虚基类职工类

protected:
	int NOEmployee;//职工号
	double wage;//工资
public:
	Employee(string En, char Es, int Eag, int EID, string Ead, int ENOE, double Ew) :Person(En, Es, Eag, EID, Ead) {

		NOEmployee = ENOE;
		wage = Ew;
	}
	void Eshow() {

		Pshow();
		cout << "职工号=" << NOEmployee << "\t" << "职工资=" << wage << endl;
	}
};

class EGStudent :public Employee, public GStudent {// 在职研究生类
protected:
	int NOEGStudent;//在职研究生学号
	string special;//在职研究生专业
public:
	EGStudent(string EGSn, char EGSs, int EGSag, int EGSID, string EGSad, int EGSNOE, double EGSw, int EGSNO,
		string EGSsp ):/*Person(EGSn,EGSs,EGSag,EGSID,EGSad),Student(EGSn, EGSs, EGSag, EGSID, EGSad, EGSNO),*/Employee(EGSn,EGSs, EGSag, EGSID, EGSad, EGSNOE, EGSw),GStudent(EGSn,EGSs, EGSag, EGSID, EGSad, EGSNO, EGSsp) {
		NOEGStudent = EGSNO;
		special = EGSsp;

	}
	void EGSshow() {
		Eshow();
		GSshow();
		cout << "职工号=" << NOEmployee << "\t";
		cout << "职工工资=" << wage << "\t";
		cout << "在职研究生学号=" << NOEGStudent << "\t";
		cout << "在职研究生专业=" << special << endl;


	}
};

int main()
{
	Person P1("奥巴马", 'm', 40, 341221, "美国白宫");
	P1.Pshow();
	cout << endl;

	Student S1("li",'m',18,341222, "北京", 111);
	S1.Sshow();

	GStudent GS1("李小萌", 'f', 20, 422111, "南京", 111,"经济");
	GS1.GSshow();
	Employee E1("赵刚", 'm', 32, 321114, "北京",113, 5000);
	E1.Eshow();
	EGStudent EGS1("zhao",'f',21, 432111, "杭州", 321, 4000, 112, "数学");
	EGS1.EGSshow();


	system("pause");
		return 0;
}



