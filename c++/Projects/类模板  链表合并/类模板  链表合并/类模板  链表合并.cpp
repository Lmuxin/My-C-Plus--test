// ��ģ��  ����ϲ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
class LNode//�����ģ��
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
class LinkList:public LNode<T> //������ģ��
	{
	protected://�ܱ������ݳ�Ա
		LNode<T>*head,*tail, *temp;
		
	public:
	LinkList();//���ձ��캯��
	LinkList(T &item);//����һ���ڵ�����Ĺ��캯��
	void insertLnode(const T &item);//������
	//void insert(T item);
	void merge(LinkList &la, LinkList &lb);//���г�Ա����  ʵ����������ĺϲ�
	void Print();//��ʾ���������Ϣ
	};
//���ձ��캯��
template<class T>
LinkList<T>::LinkList()
{
	head = tail = temp =new LNode<T> ();

}

template<class T>//����һ���ڵ�����Ĺ��캯��
LinkList<T>::LinkList(T & item)
{
	tail = temp = new LNode<T>(item);
	head = new LNode<T>(temp);
	
}


template<class T>//������
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
void LinkList<T>::merge(LinkList & la, LinkList & lb)//���г�Ա����  ʵ����������ĺϲ�
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

template<class T>//��ʾ���������Ϣ
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

	LinkList<int>linklist1(one);//���������
    LinkList<int>linklist2(six);
	LinkList<int>linklist3;
	linklist1.insertLnode(two);//������
	linklist1.insertLnode(three);
	linklist1.insertLnode(four);
	linklist1.insertLnode(five);
	linklist2.insertLnode(seven);
	linklist2.insertLnode(eight);
	linklist2.insertLnode(nine);
	linklist2.insertLnode(ten);
	linklist2.insertLnode(eleven);

	cout << "����1��" << endl;
	linklist1.Print();
	cout << endl;
	cout << "����2��" << endl;
	linklist2.Print();
	cout << endl;
	cout << "����3��" << endl;
	linklist3.merge(linklist1, linklist2);
	linklist3.Print();
	system("pause");
	return 0;
}































































   