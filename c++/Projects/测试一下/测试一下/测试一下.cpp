// ����һ��.cpp : �������̨Ӧ�ó������ڵ㡣
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
    Student(char s[]);//��һ���������캯��
	Student(char s[], int sy); //�������������캯��
	
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
Student::Student(char s[], int sy)
{
	int n;
	cout << "���������鳤�ȣ�";
	cin >> n;

	name = new char[n];
	for (int i = 0; i<n; i++)
	{
		name[i] = s[i];
	}

	year = sy;
}

//�޸�������������
void Student::setname(char *pname)
{

	name = new char[strlen(pname) + 1];
	for (int j = 0; j<strlen(pname) + 1; j++)
		name[j] = pname[j];

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
	cout << "������������,�ͷ��ڴ棡" << endl;
	delete[] name;
}
//��ʾ�������
void Student::show()
{
cout << "����=";
for (int j = 0; j < strlen(name); j++)
{
	cout << name[j];
}//����ѭ��Ҳ���������
	cout << "����=" << year << endl;
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

	Student zhangsan("����");//���ܶ���Ϊ Student zhangsan,ϵͳ�����zhangsan�ض������..���ô�һ�������Ĺ��캯��

	cout << "zhangsan1����Ϣ��" << endl;

	zhangsan.show();

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

	Student libai(lisi);//���ÿ������캯��������ĸ���


	cout << "libai����Ϣ��" << endl;

	libai.show();

	system("pause");
	return 0;
}
