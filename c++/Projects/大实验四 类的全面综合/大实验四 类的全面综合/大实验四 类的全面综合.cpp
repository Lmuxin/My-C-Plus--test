// 大实验四 类的全面综合.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Specialty//专业类
{
		private:
			char *name;//专业名称
			int score;//专业学分
		public:
			Specialty()//无参构造函数
			{
				name = new char[4];
				for (int i = 0; i < 4; i++)
				{
					name[i] =NULL;
				}
				score = 0;
			}
			Specialty(char *pname, int spscore)//带两个参数的构造函数
			{
				name = new char[strlen(pname)+1];
				for (int i = 0; i<(strlen(pname) + 1); i++)
				{
					name[i] = pname[i];
				}
				score = spscore;
			
				}

			~Specialty()//析构函数
			{
				cout << "Specialty类的析构函数被调用！" << endl;
				delete[]name;
			}

			void SPshow()
			{
				cout << "专业=" << name << "\t";
				/*cout << "专业=";
				for (int i = 0; i <( strlen(name)); i++)
				{
					cout << name[i];
				}
				cout <<endl;*/
				cout << "学分=" << score << endl;
			}

};

class Student :public Specialty
{
		private:
			char *name;//学生姓名
			int year;//学生年龄
			Specialty ss;//专业类对象,类中含有另一个类的对象
		public:
			Student() :Specialty("java", 4), ss("os", 3)//无参构造函数
			{
				name = new char[4];
				for (int i = 0; i < 4; i++)
					name[i] = NULL;
				year = 18;
			}
			Student(char *spname1/*专业名称*/, int spscore1/*专业学分*/, char *spname2/*专业名称*/, int spscore2/*专业学分*/, char *sname/*学生姓名*/, int syear/*学生年龄*/
			):Specialty(spname1,spscore1),ss(spname2,spscore2)//初始化表的构造函数
			{
				name = new char[strlen(sname) + 1];//为学生姓名动态申请空间
				for (int i = 0; i < (strlen(sname) + 1); i++)
				{
					name[i] = sname[i];
				}
				year = syear;
			}
			~Student()//析构函数
			{
				cout << "student类的析构函数被调用！" << endl;
				delete[]name;
			}
			void Sshow()
			{
				cout << "学生姓名=" <<Student:: name<<"\t";
				cout << "学生年龄=" << year << endl;
				SPshow();
				ss.SPshow();
			}
 };

int main()
{
	Specialty sp1("c++",4);
	cout << "专业类对象sp1信息：" << endl;
	sp1.SPshow();
	cout << endl;

	Specialty sp2;//调用Specialty类的无参构造函数
	cout << "专业类对象sp2信息：" << endl;
	sp2.SPshow();
	cout << endl;

	Student st1("数据结构", 4,"操作系统 ",3,"xiaoming", 20);
	cout << "学生类对象st1的信息：" << endl;
	st1.Sshow();
	cout << endl;

	Student st2;
	cout << "学生类对象st2的信息：" << endl;//调用Student类的无参构造函数
	st2.Sshow();
	cout << endl;
	system("pause");
    return 0;
}

