// ʵ��ʮ ��̬���麯�� 2222222.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Vehicle //������
{
protected:
	string name;

public:
	Vehicle(string Vn)//���ι��캯��
	{
		name = Vn;
	}
	Vehicle()//Ĭ�Ϲ��캯��
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

class Firetruck :public Vehicle//������
{
/*protected:
	string name;*/

public:

	Firetruck(string fn)//���ι��캯��
	{
		name = fn;
	}
	Firetruck()//Ĭ�Ϲ��캯��
	{
		name = "a1";
	}
	virtual void Function()
	{
		cout << "�������������������" << endl;
	}
	virtual void Show()
	{
		cout << "�ɳ��������������ڸ����ֳ��뱣���侲�����ĵȺ�" << endl;
		
	}
};

class Ambulance :public Vehicle//�Ȼ���
{
/*protected:
	string name;*/

public:
	Ambulance(string an)//���ι��캯��
	{
		name = an;
	}
	Ambulance()//Ĭ�Ϲ��캯��
	{
		name = "am";
	}

	virtual void  Function()
	{
		cout << "���ǾȻ������������ˡ�" << endl;
	}
	virtual void Show()
	{
		cout << "�ɳ��ľȻ������ڸ����ֳ��뱣���侲�����ĵȺ�" << endl;

	}
};

	class Patrol_wagon :public Vehicle//������
	{
	/*protected:
		string name;*/
	public:
		Patrol_wagon(string Pn)//���ι��캯��
		{
			name = Pn;
		}

		Patrol_wagon()//Ĭ�Ϲ��캯��
		{
			name = "pa";
		}
		virtual void Function()

		{
			cout << "���Ǿ���������ץ�ˡ�" << endl;
		}


		virtual void Show()
		{
			cout << "�ɳ��ľ������ڸ����ֳ��뱣���侲�����ĵȺ�" << endl;

		}
};
class Watering_cart :public Vehicle//��ˮ��
{
/*protected:
	string name;*/
public:

	Watering_cart(string Wn)//���ι��캯��
	{
		name = Wn;
	}
	Watering_cart()//Ĭ�Ϲ��캯��
	{
		name = "wa";
	}
	virtual void Function()
	{
		cout << "������ˮ����������ˮ��" << endl;
	}
	virtual void Show()
	{
		cout << "�ɳ�����ˮ�����ڸ����ֳ��뱣���侲�����ĵȺ�" << endl;

	}
};


//ȫ�ֺ���
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

	cout << "���ã�������������Ϊ������"<<endl;
	cout << "����������110��" << endl;
	cout << "���оȻ���������120��" << endl;
	cout << "����������������119��" << endl;
	cout <<"������ˮ��������123��" << endl;
	cout << "����������000" << endl;
	cout << "��������룺";
	cin >> number;
	
	
	while (number != 000) {

		while (number != 119 && number != 120 && number != 110 && number != 123)
		{
			cout << "��������������������룺";
			cin >> number;
		}


		assignment(number, V);
		cout << "��������룺" << endl;;
		cin >> number;
	}
	if (number == 000)
		cout << "���η��������" << endl;
	system("pause");
	return 0;
}

