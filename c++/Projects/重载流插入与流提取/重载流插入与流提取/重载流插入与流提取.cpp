// 重载流插入与流提取.cpp : 定义控制台应用程序的入口点。
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

	friend istream & operator >> (istream &, ItemSales &);
	friend ostream & operator <<(ostream &, ItemSales &);
	friend ItemSales operator + (const ItemSales &, const ItemSales &);
	/*ItemSales operator +(const ItemSales &i1) {
		
			ItemSales i;
			i.itemNum = i1.itemNum;
			i.itemUnits = itemUnits + i1.itemUnits;
			i.itemGrass = itemGrass + i1.itemGrass;
			return i;
		}*/
	
	
};
istream & operator >> (istream &input, ItemSales &i) {
	input >> i.itemNum >> i.itemUnits >> i.itemGrass;
	return input;
}
ostream & operator <<(ostream &output, ItemSales &i) 
{

	output << i.itemNum << "\t"<<i.itemUnits << "\t"<<i.itemGrass;
	return output;
}
ItemSales operator + (const ItemSales &i1, const ItemSales &i2) {
	ItemSales i;
	i.itemNum = i1.itemNum;
	i.itemUnits = i1.itemUnits + i2.itemUnits;
	i.itemGrass = i1.itemGrass + i2.itemGrass;
	return i;
}
int main()
{
	ItemSales item1, item2, item3;
	cout << "请输入item1的值:" << endl;
	cin >> item1;
	cout << "请输入item2的 值：" << endl;
	cin >> item2;
	item3 = item1+item2;
	cout << "item1：" << item1 << endl;
	cout << "item2:" << item2 << endl;
	cout << "item3:" << item3 << endl;
	system("pause");

    return 0;
}

