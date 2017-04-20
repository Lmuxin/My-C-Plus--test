// 角度类.cpp : 定义控制台应用程序的入口点。
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

double  setValue(double Cvalue) //公有成员函数，为value赋值
	{
		
		value = Cvalue;
		return value;
	}

	double GetCos(double)//共有成员函数，求余弦
	  {
		double a;
		a = cos((value / 180)*PI);
		
		return  a;
       }



	void display() 
	{

		cout << "角度" << value << endl;
		cout << "余弦值" <<cos((value*PI)/180)<< endl;

     }


};


int main()
{
    
	CAngle deg;//角度类对象
	double Cos;
	deg.setValue(30);//调用设置函数
	Cos = deg.GetCos(deg.setValue(30));
	deg.display();

	system("pause");
	return 0;
}

