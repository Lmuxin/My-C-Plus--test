// ��ʵ��� ��ļ̳� ����ָ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
//shape��
class Shape
{
protected:
	float perimeter;
	float area;
public:
	Shape(float sp, float sa)//���캯��
	{
		perimeter = sp;
		area = sa;
	}
	virtual float CalcArea()//Ϊ���������
	{
		return 0.0;
	}
};

//��������
class Triangle :public Shape
{	private:
			float edge1;
			float edge2;
			float edge3;
	public:
			Triangle(float sp, float sa, float t1, float t2, float t3) :Shape(sp, sa)//���캯��
			{
				edge1 = t1;
				edge2 = t2;
				edge3 = t3;

			}
			float CalcPeri()//���ܳ�����
			{
				if (edge1 + edge2 < edge3 || edge1 + edge3 < edge2 || edge3 + edge2 < edge1)//�ж��ܷ񹹳�������

				{
					cout << "�����߲��ܹ��������Σ�" << endl;
					return 0.0;
				}
				else
					
					return perimeter = edge1 + edge2 + edge3;

			}
			
			virtual float CalcArea()//���������
			{
				if (edge1 + edge2 < edge3 || edge1 + edge3 < edge2 || edge3 + edge2 < edge1)//�ж��ܷ񹹳�������

				{
					cout << "�����߲��ܹ��������Σ�" << endl;
					return 0.0;
				}
				else
				{
					float s;
					s = (edge1 + edge2 + edge3) / 2;
					return area=sqrt(s*(s - edge1)*(s - edge2)*(s - edge3));

                  }

			}
			void Tshow()
			{
				cout << "�������ܳ��ǣ�" <<CalcPeri()<< endl;
				cout << "����������ǣ�" << CalcArea() << endl;

			}

};

//������
class Rectangle :public Shape
{
private:
	float height;
	float width;
public:
	Rectangle(float sp, float sa, float rh, float rw):Shape(sp,sa)
	{
		height = rh;
		width = rw;
	}
	float CalcPeri()//���ܳ�
	{
		return perimeter=2 * (height + width);
	}
	virtual float CalcArea()//�����
	{
		return area=height*width;
	}
	void Rshow()
	{
		cout << "�����ܳ��ǣ�" << CalcPeri() << endl;
		cout << "��������ǣ�" << CalcArea() << endl;

	}
};
float AddShape(Shape *s[], int n)//ȫ�ֺ���,��n��ͼ������ͣ�ָ��������ʽ
{
	float addarea=0.0;
	for (int i = 0; i < n; i++)
	{
		addarea += s[i]->CalcArea();
	}

	return addarea;
}
int main()
{
	Triangle t1(1, 2, 3, 4, 5 );
	t1.Tshow();
	cout << endl;
	Triangle t2(1, 2, 6, 8, 10);
	t2.Tshow();
	cout << endl;
	Triangle t3(1, 2, 7, 12, 13);//3��Triangle �����
	t3.Tshow();
	cout << endl;
	Rectangle r1(1,2,3,4);
	r1.Rshow();
	cout << endl;
	Rectangle r2(1, 2, 5,6);
	r2.Rshow();
	cout << endl;
	Rectangle r3(1, 2, 7,8);//3��Rectangle�����
	r3.Rshow();
	Shape *p[6] = { &t1,&t2,&t3,&r1,&r2,&r3 };
	cout << endl;
	cout<<"������ǣ�"<<AddShape(p, 6);//����ȫ�ֺ���
	
	system("pause");
    return 0;
}

