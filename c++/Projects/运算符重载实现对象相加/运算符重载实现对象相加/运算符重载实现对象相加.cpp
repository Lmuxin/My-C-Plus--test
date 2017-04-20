// 运算符重载实现对象相加.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include <iostream>
# include<string>
using namespace std;
class ItemSales {
private:
	string itemNum;
	int itemUnits;
	double itemGrass;
public:
	ItemSales(string nu, int un, double gr) {
		itemNum = nu;
		itemUnits = un;
		itemGrass = gr;
}
	ItemSales() {
		itemNum = "";
		itemUnits = 0;
		itemGrass = 0;
	}
	ItemSales operator + (const ItemSales &);
	/*ItemSales operator +(const ItemSales &i2) {
		ItemSales i;
		i.itemNum = itemNum;
		i.itemUnits = itemUnits + i2.itemUnits;
		i.itemGrass = itemGrass + i2.itemGrass;
		return i;
}*/
	void diplay() {
		cout << "产品编号" << itemNum << endl;
		cout << "销售数量" << itemUnits << endl;
		cout << "销售金额" << itemGrass << endl;

}


};
ItemSales ItemSales::operator +(const ItemSales &i2) {
	ItemSales i;
	i.itemNum = itemNum;
	i.itemUnits = itemUnits + i2.itemUnits;
	i.itemGrass = itemGrass + i2.itemGrass;
	return i;
}
int main()
{
	int x = 10, y = 20, z;
	z = x + y;
	cout << "x=" << x << "\t" << "y=" << y<<"\t" << "z="<< z << endl;
	ItemSales sale1("123", 10, 30);
	cout << "sale:" << endl;
	sale1.diplay();
	ItemSales sale2("123", 20, 60);
	cout << "sale2:" << endl;
	sale2.diplay();
	ItemSales sale3 = sale1 = sale2;
	cout << "sale3:" <<endl;
	sale3.diplay();
	system("pause");

    return 0;
}

