// 实验十一 函数模板  二分排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
template<class T>
T sort(T array[], int n);


int main()
{
	int a[5] ;//整形二分排序
	cout << "请输入5个整形数据：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << "排序后的结果：" << endl;
	sort(a, 5);
	cout << endl;

	char b[6];//字符型二分排序
	cout << "请输入6个字符：" << endl;
	for (int j = 0; j < 6; j++)
	{
		cin >> b[j];
	}
	cout << "排序后的结果：" << endl;
	sort(b, 6);
	cout << endl;

	double c[8] ;
	cout << "请输入8个double型数据：" << endl;
	for (int k = 0; k < 8; k++)
	{
		cin >> c[k];
	}
	cout << "排序后的结果：" << endl;
	sort(c,8);
	cout << endl;
	system("pause");
	return 0;
}

template<class T>
T sort(T array[], int n)
{
	int  left;
	int right;
	int middle;
	T temp;
	for ( int i = 1; i<n; i++)           
	{
		left= 0;                  //最低位置  
		temp = array[i];             //要插入的元素,插在已经排好序的最高位的下一位元素              
		right= i - 1;               //最高位置  
		while (left <= right)
		{
			middle = (left + right) / 2;   //取中间位置  
			if (array[middle]>temp)    //判断要插入的元素和中间元素的大小  
				right = middle - 1;     //中间元素大,最高位置取当前中间位置的前一位,重新再求中间位置  
			else
				left= middle + 1;      //中间元素小,最高位置取当前中间位置的后一位,重新再求中间位置  
		}
		
		for (int j = i - 1; j>right; j--)   //将(high+1)～i的所有元素后移一位  
			array[j + 1] = array[j];
		array[right+ 1] = temp;        //插入元素  
	}
	for (int k = 0; k < n; k++)
		cout << array[k] << "\t";
	return array[n];
		}








