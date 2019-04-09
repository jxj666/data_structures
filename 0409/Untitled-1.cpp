/*
 * @Description: 
 * @Author: jinxiaojian
 * @Email: jinxiaojian@youxin.com
 * @LastEditors: 靳肖健
 * @Date: 2019-04-09 14:42:14
 * @LastEditTime: 2019-04-09 14:46:49
 */

#include<iostream>

using namespace std;

struct node

{

	int coef;

	int exp;

	struct node *next;

};

void attach(int c, int e, node *rear)//对形参rear的类型的定义是错误所在

{

	node *p = new node;

	p->coef = c;

	p->exp = e;

	p->next = NULL;

	rear->next = p;

	rear = p;//注意这一句的作用

}

node *read()//定义为node read()不可以，而改成这个定义方式就没有错误，为什么？因为我们的返回值是指针类型。

{

	int a, c, e;

	node *rear;//建立指向节点尾部的指针

	node *t;

	cin >> a;

	node *blank = new node;//建立空节点

	blank->next = NULL;

	rear = blank;//尾部指针指向空节点

	while (a--)

	{

		cin >> c >> e;

		attach(c, e, rear);

	}

	t = blank;//以下操作为删除空节点

	blank = blank->next;//空节点指针指向第一的节点，blank->next存放的是第一个节点的地址，本操作使blank成为指向第一个节点的指针

	delete t;

	return blank;

}

int compare(int a, int b)

 

{

	if (a > b)

		return 1;

	if (a < b)

		return 0;

	if (a == b)

		return -1;

 

}

node *add(node* p1, node *p2)

{

	node *front, *rear, *tt;

	front = new node;

	rear = front;

	int sum = 0;

	while (p1&&p2)

	{

		switch (compare(p1->exp, p2->exp))

		{

		case 1:

			attach(p1->coef, p1->exp, rear);

			p1 = p1->next;

			break;

		case 0:

			attach(p2->coef, p2->exp, rear);

			p2 = p2->next;

		case -1:

			sum = p1->coef + p2->coef;

			if (sum)attach(sum, p1->exp, rear);

			p1 = p1->next;

			p2 = p2->next;

			break;

		}

	}

	for (; p1 != 0; p1 = p1->next)

		attach(p1->coef, p1->exp, rear);

	for (; p2 != 0; p2 = p2->next)

		attach(p2->coef, p2->exp, rear);

	tt = front;

	front = front->next;

	delete tt;

	return front;

}

void print(node *p)

{

	if (!p)

	{

		cout << "0" << " " << 0 << endl;

	}

	int flag = 0;

	while (p)

	{

		if (!flag)

			flag = 1;

		else

			cout << " " << p->coef << " " << p->exp;

		p = p->next;

	}

	cout << endl;

}

int main()

{

	node *p1, *p2, *pp;

	p1 = read();

	p2 = read();

	pp = add(p1, p2);

	print(pp);

	return 0;

	system("pause");

}
