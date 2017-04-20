// ʵ��ʮһ ����ģ�� ʵ����������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
template<class T>
class Node
{
public :
	Node(Node*ne= NULL)
	{
		next = ne;
	}
	Node(const T &item,Node *ne = NULL)
	{
		date = item;
		next = ne;
	}
	T date;
	Node < T>*next;

};

template<class T>
class LinkedList
{
public :
	LinkedList();
	LinkedList(T&item);
	~LinkedList();
	bool isEmpty();
	int getLen();
	void insertNode(const T&item);
	void deleteNode(const T&item);
	int searchNode(const T &item);

private:
	Node<T>*head, *tail, *temp;
	int len;
};
template<class T>
LinkedList<T>::LinkedList()
{
	head = tail = temp = new Node<T>();
	len = 0;

}

template<class T>
LinkedList<T>::LinkedList(T &item)
{
	tail = temp = new Node<T>(temp);
	len = 1;
}
template<class T>
LinkedList<T>::~LinkedList()
{
	while (!isEmpty())
	{
		temp = head->next;
		head->next = temp->next;
		delete temp;

	}
	delete head;
}

template <class T>
bool LinkedList<T>::isEmpty()
{
	return head->next == NULL;
}
template<class T>
int LinkedList<T>::getLen()
{
	return len;
}
template<class T>
void LinkedList <T>::insertNode(const T&item)
{
	tail->next = new Node<T>(item, NULL);
	tail = tail->next;
	len++;
}


template <class T>
void LinkedList<T>::deleteNode(const T&item)
{
	temp = head;
	while ((temp->next)->date != item)
	{
		temp = temp->next;
		temp -> next = temp->next->next;
		len--;
	}
}

template<class T>
int LinkedList <T>::searchNode(const T &item)
{
	temp = head;
	while ((temp->next)->date != item)
	{
		temp = temp->next;
	}
	return temp->next->date;
}


int main()
{
	int one = 78;
	int two = 65;
	int three = 82;
	int four = 61;
	int five = 95;
	int six = 71;

	LinkedList<int>linklist2(one);
	if (linklist2.isEmpty()==0)
		cout << "������" << endl;
	else
		cout << "����Ϊ������" << endl;
	cout << "������Ϊ��" << linklist2.getLen() << endl;
	linklist2.insertNode(two);
	linklist2.insertNode(three);
	linklist2.insertNode(four);
	linklist2.insertNode(five);
	linklist2.insertNode(six);
	cout << "������Ϊ��" << linklist2.getLen() << endl;
	cout << "������Ҫ���ҵ�ֵ��" << endl;
	int num;
	cin >> num;
	cout << linklist2.searchNode(num) << endl;
	linklist2.deleteNode(four);
	cout << "������Ϊ��" << linklist2.getLen() << endl;
    return 0;
	system("pause");
}

