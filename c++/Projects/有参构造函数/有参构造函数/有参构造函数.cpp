// �вι��캯��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>

using namespace std;

class chang {
private:
	int length;
	int width;
public:
	chang(int, int);
	void set(int len, int wid);
	int area();
};

chang::chang(int leng, int wi) {
	length = leng;
	width = wi;
 }
void chang::set(int le, int w) {
	length = le;
	width = w;
}
int chang::area() {

	int area;
	area = length*width;
	return area;


}
int main()
{
	chang c1(7,8);
	cout << "���" << c1.area()<<endl;
	chang c2(5, 6);
	cout << "��� "<< c2.area()<<endl;
	c2.set(6, 10);
	cout << "���" << c2.area()<<endl;
	system("pause");
	
    return 0;
}

