// ʵ��ʮһ ����ģ��  ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
template<class T>
T sort(T array[], int n);


int main()
{
	int a[5] ;//���ζ�������
	cout << "������5���������ݣ�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << "�����Ľ����" << endl;
	sort(a, 5);
	cout << endl;

	char b[6];//�ַ��Ͷ�������
	cout << "������6���ַ���" << endl;
	for (int j = 0; j < 6; j++)
	{
		cin >> b[j];
	}
	cout << "�����Ľ����" << endl;
	sort(b, 6);
	cout << endl;

	double c[8] ;
	cout << "������8��double�����ݣ�" << endl;
	for (int k = 0; k < 8; k++)
	{
		cin >> c[k];
	}
	cout << "�����Ľ����" << endl;
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
		left= 0;                  //���λ��  
		temp = array[i];             //Ҫ�����Ԫ��,�����Ѿ��ź�������λ����һλԪ��              
		right= i - 1;               //���λ��  
		while (left <= right)
		{
			middle = (left + right) / 2;   //ȡ�м�λ��  
			if (array[middle]>temp)    //�ж�Ҫ�����Ԫ�غ��м�Ԫ�صĴ�С  
				right = middle - 1;     //�м�Ԫ�ش�,���λ��ȡ��ǰ�м�λ�õ�ǰһλ,���������м�λ��  
			else
				left= middle + 1;      //�м�Ԫ��С,���λ��ȡ��ǰ�м�λ�õĺ�һλ,���������м�λ��  
		}
		
		for (int j = i - 1; j>right; j--)   //��(high+1)��i������Ԫ�غ���һλ  
			array[j + 1] = array[j];
		array[right+ 1] = temp;        //����Ԫ��  
	}
	for (int k = 0; k < n; k++)
		cout << array[k] << "\t";
	return array[n];
		}








