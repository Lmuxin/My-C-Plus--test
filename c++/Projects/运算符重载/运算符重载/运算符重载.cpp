// ���������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include <iostream>
# include <string>
using namespace std;
class ItemSales {
private:
	string itemNum;//��Ʒ���
	int itemUnits;//��������
	double itemGrass;//���۽��
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
		ItemSales add(const ItemSales &);
	/*ItemSales add(const ItemSales&i2) 
	{

		ItemSales i;
		i.itemNum = itemNum;
		i.itemUnits = itemUnits + i2.itemUnits;
		i.itemGrass = itemGrass + i2.itemGrass;
		return i;

}*/
	void display() {


		cout << "��Ʒ���" << itemNum << endl;
		cout << "��������" << itemUnits << endl;
		cout << "���۽��" << itemGrass << endl;
}

};
ItemSales ItemSales::add(const ItemSales&i2)
{

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
	cout << "x=" << x<<"\t";
	cout << "y=" << y<<"\t";
	cout << "z=" << z << "\t";
	ItemSales sale1("abc", 10, 25);
	ItemSales sale2("abc", 20, 60);
	cout << "sale1=" << endl;
	sale1.display();
	cout << "sale2=" << endl;
	sale2.display();
	ItemSales sale3 = sale1.add(sale2);
	cout << "sale3=" << endl;
	sale3.display();
	system("pause");
    return 0;
}

