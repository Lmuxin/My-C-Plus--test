// ��ʵ���� ���ȫ���ۺ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Specialty//רҵ��
{
		private:
			char *name;//רҵ����
			int score;//רҵѧ��
		public:
			Specialty()//�޲ι��캯��
			{
				name = new char[4];
				for (int i = 0; i < 4; i++)
				{
					name[i] =NULL;
				}
				score = 0;
			}
			Specialty(char *pname, int spscore)//�����������Ĺ��캯��
			{
				name = new char[strlen(pname)+1];
				for (int i = 0; i<(strlen(pname) + 1); i++)
				{
					name[i] = pname[i];
				}
				score = spscore;
			
				}

			~Specialty()//��������
			{
				cout << "Specialty����������������ã�" << endl;
				delete[]name;
			}

			void SPshow()
			{
				cout << "רҵ=" << name << "\t";
				/*cout << "רҵ=";
				for (int i = 0; i <( strlen(name)); i++)
				{
					cout << name[i];
				}
				cout <<endl;*/
				cout << "ѧ��=" << score << endl;
			}

};

class Student :public Specialty
{
		private:
			char *name;//ѧ������
			int year;//ѧ������
			Specialty ss;//רҵ�����,���к�����һ����Ķ���
		public:
			Student() :Specialty("java", 4), ss("os", 3)//�޲ι��캯��
			{
				name = new char[4];
				for (int i = 0; i < 4; i++)
					name[i] = NULL;
				year = 18;
			}
			Student(char *spname1/*רҵ����*/, int spscore1/*רҵѧ��*/, char *spname2/*רҵ����*/, int spscore2/*רҵѧ��*/, char *sname/*ѧ������*/, int syear/*ѧ������*/
			):Specialty(spname1,spscore1),ss(spname2,spscore2)//��ʼ����Ĺ��캯��
			{
				name = new char[strlen(sname) + 1];//Ϊѧ��������̬����ռ�
				for (int i = 0; i < (strlen(sname) + 1); i++)
				{
					name[i] = sname[i];
				}
				year = syear;
			}
			~Student()//��������
			{
				cout << "student����������������ã�" << endl;
				delete[]name;
			}
			void Sshow()
			{
				cout << "ѧ������=" <<Student:: name<<"\t";
				cout << "ѧ������=" << year << endl;
				SPshow();
				ss.SPshow();
			}
 };

int main()
{
	Specialty sp1("c++",4);
	cout << "רҵ�����sp1��Ϣ��" << endl;
	sp1.SPshow();
	cout << endl;

	Specialty sp2;//����Specialty����޲ι��캯��
	cout << "רҵ�����sp2��Ϣ��" << endl;
	sp2.SPshow();
	cout << endl;

	Student st1("���ݽṹ", 4,"����ϵͳ ",3,"xiaoming", 20);
	cout << "ѧ�������st1����Ϣ��" << endl;
	st1.Sshow();
	cout << endl;

	Student st2;
	cout << "ѧ�������st2����Ϣ��" << endl;//����Student����޲ι��캯��
	st2.Sshow();
	cout << endl;
	system("pause");
    return 0;
}

