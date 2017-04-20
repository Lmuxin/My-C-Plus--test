// 带初始化表的构造函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>

using namespace std;
class point {
private:
	int x;
	const int y;
public:
	point(int ix, int iy) :x(ix), y(iy) {};
	void set(int ix) {

		x = ix;
	}
	void  print() {
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}

};


int main()

{
point point(1, 2);
point.print();

point.set(5);
point.print();
system("pause");
    return 0;
}

