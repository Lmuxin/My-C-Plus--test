// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//
# include "stdafx.h"
#include<iostream>
using namespace std;
#define N 20
int main() {
	int i, j, k = 0, m, n, flag, flag2;
	int a[N], b[N], c[N];
	cin >> m;
	for (i = 0; i < m; i++)
		cin >> a[i];
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> b[i];

	for (i = 0; i < m; i++)
	{
		
		for (j = 0; j < n; j++)
		{
			if (a[i] == b[j])
			{
				//flag = 1;
				break;
			}
			}
			//if(!flag)
		if (a[i] != b[j])
		{
				//flag2 = 0;
				for (j = 0; j < k; j++)
				{
					if (c[j] == a[i])
					{
						//flag2 = 1;
						break;
					}
					//}
					else//elseif(!flag2)
					{
						c[k] = a[i];
						k++;
					}
				}
			}
		}
	

	for (i = 0; i < n; i++)
	{
		//flag = 0;
		for (j = 0; j < m; j++)
		{
			if (b[i] == a[j])
			{
				//flag = 1;
				break;
			}
		}
			//}
			 //if(!flag) {
				  //flag2 = 0;
		if (b[i] != a[j])
		{
				for (j = 0; j < k; j++)
				{
					if (c[j] == b[i])
					{
						//flag2 = 1;
						break;
					}
					//}
					if (c[j] != b[i])//if(!flag2)
					{
						c[k] = b[i];
						k++;
					}
				}

			}
		}
	
	for (i = 0; i < k - 1; i++)
		cout << c[i];
	cout << "\t" << c[k - 1];
	system("pause");
	return 0;
}