// 类模板  链表合并.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
class LNode//结点类模板
{
	public:
	LNode(LNode * ne = NULL)
	{
		next = ne;
	}
	LNode(const T &item, LNode *ne = NULL)
	{
		date = item;

		next = ne;
	}
	T date;
	LNode <T>*next;

};

template<class T>
class LinkList:public LNode<T> //链表类模板
	{
	protected://受保护数据成员
		LNode<T>*head,*tail, *temp;
		
	public:
	LinkList();//建空表构造函数
	LinkList(T &item);//建立一个节点链表的构造函数
	void insertLnode(const T &item);//插入结点
	//void insert(T item);
	void merge(LinkList &la, LinkList &lb);//公有成员函数  实现俩个链表的合并
	void Print();//显示输出链表信息
	};
//建空表构造函数
template<class T>
LinkList<T>::LinkList()
{
	head = tail = temp =new LNode<T> ();

}

template<class T>//建立一个节点链表的构造函数
LinkList<T>::LinkList(T & item)
{
	tail = temp = new LNode<T>(item);
	head = new LNode<T>(temp);
	
}


template<class T>//插入结点
void LinkList<T>::insertLnode(const T & item)
{
	tail->next = new LNode<T>(item, NULL);
	tail = tail->next;
	
}

/*template<class T>
void LinkList<T>::insert(T item)
{
	LNode *q = new LNode;
	q->date = item;
	LNode *p = head;
	while (p->next)
	{
		p = p->next;
		q->next = NULL;
		p->next = q;
	}
}*/

template<class T>
void LinkList<T>::merge(LinkList & la, LinkList & lb)//公有成员函数  实现俩个链表的合并
{
	LNode *pa = la.head->next;
	LNode *pb = lb.head->next;
	LNode *p = head;
	while (pa&&pb)
	{
		LNode *q = new LNode;
		if (pa->date < pb->date)
		{
			q->date = pa->date;
			pa = pa->next;
			p->next = q;
			p = q;
		}
		else
		{
			q->date = pb->date;
			pb = pb->next;
			p->next = q;
			p = q;
		}
	}
	while (pa)
	{
		LNode *q = new LNode;
		q->date = pa->date;
		pa = pa->next;
		p->next = q;
		p = q;
	}
	while (pb)
	{
		LNode *q = new LNode;
		q->date = pb->date;
		pb = pb->next;
		p->next = q;
		p = q;

	}
	p->next = NULL;
}

template<class T>//显示输出链表信息
void LinkList<T>::Print()
{

	LNode<T> *p = head->next;
	while (p!=NULL)
	{
		cout << p->date << "\t";
		p = p->next;
	}
	
}





int main()
{
    int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;
	int five = 5;
	int six = 6;
	int seven = 7;
	int eight = 8;
	int nine = 9;
	int ten = 10;
	int eleven = 11;

	LinkList<int>linklist1(one);//链表类对象
    LinkList<int>linklist2(six);
	LinkList<int>linklist3;
	linklist1.insertLnode(two);//插入结点
	linklist1.insertLnode(three);
	linklist1.insertLnode(four);
	linklist1.insertLnode(five);
	linklist2.insertLnode(seven);
	linklist2.insertLnode(eight);
	linklist2.insertLnode(nine);
	linklist2.insertLnode(ten);
	linklist2.insertLnode(eleven);

	cout << "链表1：" << endl;
	linklist1.Print();
	cout << endl;
	cout << "链表2：" << endl;
	linklist2.Print();
	cout << endl;
	cout << "链表3：" << endl;
	linklist3.merge(linklist1, linklist2);
	linklist3.Print();
	system("pause");
	return 0;
}































































   