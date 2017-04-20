// 图书订单类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>
using namespace std;
class BookOrder {

private:

	char BookID[6];//图书编号
	int Quantity;//图书数量

public:
	double Price;//图书价格



	void BookInit(char BK[],int Qu,double Pr)
	{
		for (int i = 0; i < 6; i++)
			BookID[i] = BK[i];
		Quantity = Qu;
		Price = Pr;
		
}
	/*void BookInit(char *BK[], int Qu, double Pr)
	{
		for (int i = 0; i < 6; i++)
			BookID[i] =*BK[i];
		Quantity = Qu;
		Price = Pr;

	}*/


	void BookInfo()
		
	{
	    cout << "**************************" << endl;
		cout << "图书信息:" << endl;
		cout << "图书编号:" << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << BookID[i];
			
		}
		cout << endl;
		cout << "单价:" << Price << endl;
		cout << "数量:" << Quantity<< endl;
		cout << "总价:" << Price*Quantity << endl;


	}

};

int main()

{
	BookOrder bkorder;

	char BookID[6];
		
	int Quantity;
	double Price;
	cout << "请输入图书编号:" << endl;
	for (int j = 0; j < 6; j++) {
		cin >> BookID[j];
	}

	cout << "请输入价格:" << endl;
	cin >> Price;
	cout << "请输入数量:" << endl;
	cin >> Quantity;
	bkorder.BookInit(BookID, Quantity, Price);//数组名做函数参数
	
	
	
	/*char *BookID[6];
	int Quantity;
	double Price;
	cout << "请输入图书编号:" << endl;
	for (int j = 0; j < 6; j++) {
		cin >> *BookID[j];
	}

	cout << "请输入价格:" << endl;
	cin >> Price;
	cout << "请输入数量:" << endl;
	cin >> Quantity;
	 bkorder.BookInit(BookID,Quantity, Price);//数组名做函数参数
*/

		
		bkorder.BookInfo();

		bkorder.Price =(bkorder.Price)*0.8;//修改图书价格，因为Price已经定义为公有成员，所以用类名可以访问

		bkorder.BookInfo();
	    system("pause");

    return 0;
}

