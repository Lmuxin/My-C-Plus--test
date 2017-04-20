// 无参构造函数.cpp : 定义控制台应用程序的入口点。
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

	/*int*/ length = 3;//这里加上int，输出乱码，不加int正常输出，为什么？
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
	cout << "面积" << c.area() << endl;
	/*cout << "面积" << endl;*/
	chang c1;
	c1.set(5, 6);
	cout << "面积"<<c1.area()<<endl;
	system("pause");
    return 0;
}

