// ͼ�鶩����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include<iostream>
using namespace std;
class BookOrder {

private:

	char BookID[6];//ͼ����
	int Quantity;//ͼ������

public:
	double Price;//ͼ��۸�



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
		cout << "ͼ����Ϣ:" << endl;
		cout << "ͼ����:" << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << BookID[i];
			
		}
		cout << endl;
		cout << "����:" << Price << endl;
		cout << "����:" << Quantity<< endl;
		cout << "�ܼ�:" << Price*Quantity << endl;


	}

};

int main()

{
	BookOrder bkorder;

	char BookID[6];
		
	int Quantity;
	double Price;
	cout << "������ͼ����:" << endl;
	for (int j = 0; j < 6; j++) {
		cin >> BookID[j];
	}

	cout << "������۸�:" << endl;
	cin >> Price;
	cout << "����������:" << endl;
	cin >> Quantity;
	bkorder.BookInit(BookID, Quantity, Price);//����������������
	
	
	
	/*char *BookID[6];
	int Quantity;
	double Price;
	cout << "������ͼ����:" << endl;
	for (int j = 0; j < 6; j++) {
		cin >> *BookID[j];
	}

	cout << "������۸�:" << endl;
	cin >> Price;
	cout << "����������:" << endl;
	cin >> Quantity;
	 bkorder.BookInit(BookID,Quantity, Price);//����������������
*/

		
		bkorder.BookInfo();

		bkorder.Price =(bkorder.Price)*0.8;//�޸�ͼ��۸���ΪPrice�Ѿ�����Ϊ���г�Ա���������������Է���

		bkorder.BookInfo();
	    system("pause");

    return 0;
}

