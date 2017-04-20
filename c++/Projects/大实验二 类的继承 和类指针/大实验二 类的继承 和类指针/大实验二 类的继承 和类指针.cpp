// 大实验二 类的继承 和类指针.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
//shape类
class Shape
{
protected:
	float perimeter;
	float area;
public:
	Shape(float sp, float sa)//构造函数
	{
		perimeter = sp;
		area = sa;
	}
	virtual float CalcArea()//为了求面积和
	{
		return 0.0;
	}
};

//三角形类
class Triangle :public Shape
{	private:
			float edge1;
			float edge2;
			float edge3;
	public:
			Triangle(float sp, float sa, float t1, float t2, float t3) :Shape(sp, sa)//构造函数
			{
				edge1 = t1;
				edge2 = t2;
				edge3 = t3;

			}
			float CalcPeri()//求周长函数
			{
				if (edge1 + edge2 < edge3 || edge1 + edge3 < edge2 || edge3 + edge2 < edge1)//判断能否构成三角形

				{
					cout << "此三边不能构成三角形！" << endl;
					return 0.0;
				}
				else
					
					return perimeter = edge1 + edge2 + edge3;

			}
			
			virtual float CalcArea()//求面积函数
			{
				if (edge1 + edge2 < edge3 || edge1 + edge3 < edge2 || edge3 + edge2 < edge1)//判断能否构成三角形

				{
					cout << "此三边不能构成三角形！" << endl;
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
				cout << "三角形周长是：" <<CalcPeri()<< endl;
				cout << "三角形面积是：" << CalcArea() << endl;

			}

};

//矩形类
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
	float CalcPeri()//求周长
	{
		return perimeter=2 * (height + width);
	}
	virtual float CalcArea()//求面积
	{
		return area=height*width;
	}
	void Rshow()
	{
		cout << "矩形周长是：" << CalcPeri() << endl;
		cout << "矩形面积是：" << CalcArea() << endl;

	}
};
float AddShape(Shape *s[], int n)//全局函数,求n个图形面积和，指针数组形式
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
	Triangle t3(1, 2, 7, 12, 13);//3个Triangle 类对象
	t3.Tshow();
	cout << endl;
	Rectangle r1(1,2,3,4);
	r1.Rshow();
	cout << endl;
	Rectangle r2(1, 2, 5,6);
	r2.Rshow();
	cout << endl;
	Rectangle r3(1, 2, 7,8);//3个Rectangle类对象
	r3.Rshow();
	Shape *p[6] = { &t1,&t2,&t3,&r1,&r2,&r3 };
	cout << endl;
	cout<<"面积和是："<<AddShape(p, 6);//调用全局函数
	
	system("pause");
    return 0;
}

