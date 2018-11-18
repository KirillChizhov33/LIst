#include "Header.h"
List::List()
{
	h = NULL;
}
List::List(const List &b)
{
	if (b.h == NULL)
	{
		throw - 1;
	}
	Link * k;
	k = b.h;
	while (k != NULL)
	{
		this->insertf(k->value);
		k = k->n;
	}
}
List::~List()
{
	while (h != NULL)
	{
		deletef();
	}
}
void List::insertf(int value)
{
	Link * k;
	k = new Link;
	k->value = value;
	k->n = h;
	h = k;
}
void List::show()
{
	Link * p;
	p = h;
	while (p != NULL)
	{
		cout << p->value << endl;
		p = p->n;
	}
}
void List::deletef()
{
	if (h = NULL)
	{
		return;
	}
	Link * p;
	p = h;
	h = h->n;
	delete p;
}
void List::insertl(int value)
{
	Link * p;
	p = new Link;
	p->value = value;
	p->n = NULL;
	Link * t;
	if (h == NULL)
	{
		h = p;
		return;
	}
	t = h;
	while (t->n != NULL)
	{
		t = t->n;
		t->n = p;
	}
}
void List::deletel()
{
	if (h == NULL)
	{
		return;
	}
	if (h->n == NULL)
	{
		delete h;
		return;
	}
	Link * p;
	p = h;
	while (p->n->n != NULL)
	{
		p = p->n;
		delete p->n;
		p->n = NULL;
	}
}
int & List:: operator [](int index)
{
	if (index < 0)
	{
		throw - 1;
	}
	Link * t = h;
	int i = 0;
	while ((t != NULL) && (i < index))
	{
		i++;
		t = t->n;
	}
	if (t == NULL)
	{
		throw - 1;
	}
	else
		return t->value;
}
int List::max()
{
	if (h == NULL)
	{
		throw - 1;
	}
	Link * p;
	p = h;
	int maxelem;
	maxelem = p->value;
	p = p->n;
	while (p != NULL)
	{
		if (maxelem < p->value)
		{
			maxelem = p->value;
		}
		p = p->n;
	}
	return maxelem;
}