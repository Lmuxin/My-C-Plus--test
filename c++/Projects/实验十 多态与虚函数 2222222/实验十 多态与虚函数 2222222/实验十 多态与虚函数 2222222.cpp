// 实验十 多态与虚函数 2222222.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Vehicle //车辆类
{
protected:
	string name;

public:
	Vehicle(string Vn)//带参构造函数
	{
		name = Vn;
	}
	Vehicle()//默认构造函数
	{
		name = "ve";
	}
	virtual void Function()
	{
		cout<<" ";
	}
	
	virtual void Show()
	{
		cout << " ";
	}
};

class Firetruck :public Vehicle//消防车
{
/*protected:
	string name;*/

public:

	Firetruck(string fn)//带参构造函数
	{
		name = fn;
	}
	Firetruck()//默认构造函数
	{
		name = "a1";
	}
	virtual void Function()
	{
		cout << "我是消防车，我来灭火。" << endl;
	}
	virtual void Show()
	{
		cout << "派出的消防车车正在赶往现场请保持冷静并耐心等候。" << endl;
		
	}
};

class Ambulance :public Vehicle//救护车
{
/*protected:
	string name;*/

public:
	Ambulance(string an)//带参构造函数
	{
		name = an;
	}
	Ambulance()//默认构造函数
	{
		name = "am";
	}

	virtual void  Function()
	{
		cout << "我是救护车，我来救人。" << endl;
	}
	virtual void Show()
	{
		cout << "派出的救护车正在赶往现场请保持冷静并耐心等候。" << endl;

	}
};

	class Patrol_wagon :public Vehicle//警车类
	{
	/*protected:
		string name;*/
	public:
		Patrol_wagon(string Pn)//带参构造函数
		{
			name = Pn;
		}

		Patrol_wagon()//默认构造函数
		{
			name = "pa";
		}
		virtual void Function()

		{
			cout << "我是警车，我来抓人。" << endl;
		}


		virtual void Show()
		{
			cout << "派出的警车正在赶往现场请保持冷静并耐心等候。" << endl;

		}
};
class Watering_cart :public Vehicle//洒水车
{
/*protected:
	string name;*/
public:

	Watering_cart(string Wn)//带参构造函数
	{
		name = Wn;
	}
	Watering_cart()//默认构造函数
	{
		name = "wa";
	}
	virtual void Function()
	{
		cout << "我是洒水车，我来洒水。" << endl;
	}
	virtual void Show()
	{
		cout << "派出的洒水车正在赶往现场请保持冷静并耐心等候。" << endl;

	}
};


//全局函数
void assignment(int massagementype, Vehicle *v1)
{

	Firetruck F1;
	Ambulance A1;
	Patrol_wagon P1;
	Watering_cart W1;

	switch (massagementype)
	{

	case 119:

		v1 = &F1;
		v1->Function();
		v1->Show();
		break;

	case 120:
		v1 = &A1;
		v1->Function();
		v1->Show();
		break;

	case 110:
		v1 = &P1;
		v1->Function();
		v1->Show();
		break;
	case 123:
		v1 = &W1;
		v1->Function();
		v1->Show();
		break;
	
	}

}


int main()
{


	int number;
	Vehicle *V;
	Vehicle ve;
	V = &ve;

	cout << "您好，紧急救助中心为您服务。"<<endl;
	cout << "报警请输入110。" << endl;
	cout << "呼叫救护车请输入120。" << endl;
	cout << "呼叫消防车请输入119。" << endl;
	cout <<"呼叫洒水车请输入123。" << endl;
	cout << "结束请输入000" << endl;
	cout << "请输入号码：";
	cin >> number;
	
	
	while (number != 000) {

		while (number != 119 && number != 120 && number != 110 && number != 123)
		{
			cout << "输入号码有误，请重新输入：";
			cin >> number;
		}


		assignment(number, V);
		cout << "请输入号码：" << endl;;
		cin >> number;
	}
	if (number == 000)
		cout << "本次服务结束。" << endl;
	system("pause");
	return 0;
}

