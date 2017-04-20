// 静态数据成员与静态成员函数----职工类.cpp : 定义控制台应用程序的入口点。
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
	cout << "职工编号";
	cin >> num;
	cout << "职工姓名";
	cin >> name;
	cout << "职工工资";
	cin >> salary;
	cout << endl;
	wo[i].set(name, num, salary);
}

for (int i = 0; i < N; i++) {
	wo[i].total();
}
worker::average();
cout << "职工总数" << worker::sumnumber << endl;
cout << "工资总数" << worker::sumsalary << endl;
cout << "平均工资" << worker::aversalary << endl;
system("pause");
    return 0;
}


