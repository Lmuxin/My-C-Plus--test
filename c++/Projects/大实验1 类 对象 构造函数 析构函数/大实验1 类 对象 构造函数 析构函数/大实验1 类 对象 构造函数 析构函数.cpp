// ��ʵ��1 �� ���� ���캯�� ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Student
{
	private:
		char *name;
		int year;
		
	public:
		
		Student();//�޲ι��캯��
		Student(char *pname);//��һ���������캯��
		Student(char *pname ,int sy); //�������������캯��
		void setname(char *pname);//�޸�������������
		void setyear(int syear);//�޸��������亯��
		Student(const Student & s);//�������캯��,���
		~Student();//��������
		void show();//��ʾ�������
		};

//�޲ι��캯��
Student::Student()
{
	name = "";
	year = 20;
	
}
//��һ���������캯��
Student::Student(char * pname)
{
	name = new char[strlen(pname) + 1];
	name = pname;
	year = 21;
}


//�Ѕ����캯��
Student::Student(char *pname, int sy)
{
	
	name = new char[strlen(pname)+1];
	
	for (int i = 0; i<strlen(pname)+1; i++)
	{
	name[i]= pname[i];
	}

	year = sy;
}
//�޸�������������
void Student::setname(char *pname)
{
	
	name = new char[strlen(pname) + 1];
	for (int j = 0; j<strlen(pname) + 1; j++)
		name[j] =pname[j];

}
//�޸��������亯��
void Student::setyear(int syear)
{
	year = syear;

}

//�������캯��,���
Student::Student(const Student & s)
{
	name = s.name;
	year = s.year;
}

//��������
Student::~Student()
{
	cout << "������������,�ͷ��ڴ��㣡" << endl;
	delete [] name;
}
//��ʾ�������
void Student::show()
{
	cout << "����="<< name <<"\t";//����ѭ��Ҳ���������
	cout << "����=" << year<<endl;
   cout << endl;
}
int main()
{
	
	Student zhangsan("����", 18);//����zhangsan

	Student lisi("����", 19);//����lisi

	cout << "��������Ϣ��" << endl;

	zhangsan.show();

	cout << "���ĵ���Ϣ��" << endl;

	lisi.show();

    Student zhangsan1("����");//���ܶ���Ϊ Student zhangsan,ϵͳ�����zhangsan�ض������..���ô�һ�������Ĺ��캯��

	cout << "zhangsan1����Ϣ��" << endl;

	zhangsan1.show();

	zhangsan.setname("��ɽɽ");//�޸�zhangsan����

	cout << "�޸Ĺ�������zhangsan����Ϣ��" << endl;

		zhangsan.show();

		lisi.setyear(29);//�޸�lisi����

		cout << "�޸Ĺ������lisi����Ϣ��" << endl;

		lisi.show();

		Student wangwei;//����wangwei.�����޲ι��캯��

		cout << "wangwei����Ϣ��" << endl;

		wangwei.show();

		Student xiaozhang = zhangsan;//����ĸ�ֵ����Ϊ�����Ѿ����忽�����캯������Ҳ�����

		cout << "xiaozhang����Ϣ��" << endl;

		xiaozhang.show();

		Student libai (lisi);//���ÿ������캯��������ĸ���


		cout << "libai����Ϣ��" << endl;

		libai.show();

	system("pause");
	return 0;
}