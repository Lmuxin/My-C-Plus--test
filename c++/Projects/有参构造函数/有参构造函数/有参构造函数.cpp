// 有参构造函数.cpp : 定义控制台应用程序的入口点。
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
	cout << "面积" << c1.area()<<endl;
	chang c2(5, 6);
	cout << "面积 "<< c2.area()<<endl;
	c2.set(6, 10);
	cout << "面积" << c2.area()<<endl;
	system("pause");
	
    return 0;
}

