// ��̬���ݳ�Ա�뾲̬��Ա����----ְ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include <iostream>
# include<string>
using namespace std;

class worker {
private:
	string name;
	int wonum;
	float salary;
public:
	static int sumnumber;
	static float sumsalary;
	static float aversalary;
public:
	worker(string wname="", int wnum=0, float wsala=0) {
		name = wname;
		wonum = wnum;
		salary = wsala;
	}
	void set(string wn="", int wnu=0, float ws=0) {
		name = wn;
		wonum = wnu;
		salary = ws;

	}
	void total() {

		sumsalary += salary;
		sumnumber++;
	}
	static void average() {
		aversalary = sumsalary / sumnumber;
	}
};
int worker::sumnumber = 0;
float worker::sumsalary = 0;
float worker::aversalary = 0;


int main(){
const int N = 5;
worker wo[N];
for (int i = 0; i < N; i++)
{
	int num;
	string name;
	float salary;
	cout << "ְ�����";
	cin >> num;
	cout << "ְ������";
	cin >> name;
	cout << "ְ������";
	cin >> salary;
	cout << endl;
	wo[i].set(name, num, salary);
}

for (int i = 0; i < N; i++) {
	wo[i].total();
}
worker::average();
cout << "ְ������" << worker::sumnumber << endl;
cout << "��������" << worker::sumsalary << endl;
cout << "ƽ������" << worker::aversalary << endl;
system("pause");
    return 0;
}


