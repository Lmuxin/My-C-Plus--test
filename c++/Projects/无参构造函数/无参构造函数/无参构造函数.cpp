// �޲ι��캯��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>
using namespace std;

class chang {
private:
	int length;
	int width;
public:
	chang();
	void set(int, int);
	int area();
};
chang::chang() {

	/*int*/ length = 3;//�������int��������룬����int���������Ϊʲô��
	/*int*/  width = 4;

}
void chang::set(int len, int w) {
	length = len;
	width = w;
}
int chang::area() {


	int a;
	a= length*width;
	
	return a;

}

int main()
{
	chang c;
	cout << "���" << c.area() << endl;
	/*cout << "���" << endl;*/
	chang c1;
	c1.set(5, 6);
	cout << "���"<<c1.area()<<endl;
	system("pause");
    return 0;
}

