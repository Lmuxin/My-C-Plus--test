// �Ƕ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
using namespace std;
#define PI 3.1415926f
class CAngle {
   private:
      double value;
   
    public:
	/*void set(double Cvalue) 
	{
		value = Cvalue; 
	  }*/

double  setValue(double Cvalue) //���г�Ա������Ϊvalue��ֵ
	{
		
		value = Cvalue;
		return value;
	}

	double GetCos(double)//���г�Ա������������
	  {
		double a;
		a = cos((value / 180)*PI);
		
		return  a;
       }



	void display() 
	{

		cout << "�Ƕ�" << value << endl;
		cout << "����ֵ" <<cos((value*PI)/180)<< endl;

     }


};


int main()
{
    
	CAngle deg;//�Ƕ������
	double Cos;
	deg.setValue(30);//�������ú���
	Cos = deg.GetCos(deg.setValue(30));
	deg.display();

	system("pause");
	return 0;
}

