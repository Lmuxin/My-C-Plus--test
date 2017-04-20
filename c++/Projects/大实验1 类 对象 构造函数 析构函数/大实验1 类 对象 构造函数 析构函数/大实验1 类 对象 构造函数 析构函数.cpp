// 大实验1 类 对象 构造函数 析构函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Student
{
	private:
		char *name;
		int year;
		
	public:
		
		Student();//无参构造函数
		Student(char *pname);//带一个参数构造函数
		Student(char *pname ,int sy); //带两个參数构造函数
		void setname(char *pname);//修改设置姓名函数
		void setyear(int syear);//修改设置年龄函数
		Student(const Student & s);//拷贝构造函数,深复制
		~Student();//析构函数
		void show();//显示输出函数
		};

//无参构造函数
Student::Student()
{
	name = "";
	year = 20;
	
}
//带一个参数构造函数
Student::Student(char * pname)
{
	name = new char[strlen(pname) + 1];
	name = pname;
	year = 21;
}


//有參构造函数
Student::Student(char *pname, int sy)
{
	
	name = new char[strlen(pname)+1];
	
	for (int i = 0; i<strlen(pname)+1; i++)
	{
	name[i]= pname[i];
	}

	year = sy;
}
//修改设置姓名函数
void Student::setname(char *pname)
{
	
	name = new char[strlen(pname) + 1];
	for (int j = 0; j<strlen(pname) + 1; j++)
		name[j] =pname[j];

}
//修改设置年龄函数
void Student::setyear(int syear)
{
	year = syear;

}

//拷贝构造函数,深复制
Student::Student(const Student & s)
{
	name = s.name;
	year = s.year;
}

//析构函数
Student::~Student()
{
	cout << "调用析构函数,释放内存你！" << endl;
	delete [] name;
}
//显示输出函数
void Student::show()
{
	cout << "姓名="<< name <<"\t";//不用循环也可以输出啊
	cout << "年龄=" << year<<endl;
   cout << endl;
}
int main()
{
	
	Student zhangsan("张三", 18);//对象zhangsan

	Student lisi("李四", 19);//对象lisi

	cout << "张三的信息：" << endl;

	zhangsan.show();

	cout << "李四的信息：" << endl;

	lisi.show();

    Student zhangsan1("张三");//不能定义为 Student zhangsan,系统会给出zhangsan重定义错误..调用带一个参数的构造函数

	cout << "zhangsan1的信息：" << endl;

	zhangsan1.show();

	zhangsan.setname("张山山");//修改zhangsan姓名

	cout << "修改过姓名的zhangsan的信息：" << endl;

		zhangsan.show();

		lisi.setyear(29);//修改lisi年龄

		cout << "修改过年龄的lisi的信息：" << endl;

		lisi.show();

		Student wangwei;//对象wangwei.调用无参构造函数

		cout << "wangwei的信息：" << endl;

		wangwei.show();

		Student xiaozhang = zhangsan;//对象的赋值，因为上面已经定义拷贝构造函数，这也是深复制

		cout << "xiaozhang的信息：" << endl;

		xiaozhang.show();

		Student libai (lisi);//调用拷贝构造函数，对象的复制


		cout << "libai的信息：" << endl;

		libai.show();

	system("pause");
	return 0;
}