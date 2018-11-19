#include "Header.h"
List::List()
{
	h = nullptr;
}
List::List(const List &b)
{
	if (b.h == nullptr)
	{
		throw - 1;
	}
	Link * k;
	k = b.h;
	while (k != nullptr)
	{
		this->insertf(k->value);
		k = k->n;
	}
}
List::~List()
{
	while (h != nullptr)
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
	while (p != nullptr)
	{
		cout << p->value << endl;
		p = p->n;
	}
}
void List::deletef()
{
	if (h == nullptr)
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
	p->n = nullptr;
	Link * t;
	if (h == nullptr)
	{
		h = p;
		return;
	}
	t = h;
	while (t->n != nullptr)
	{
		t = t->n;
	}
	t->n = p;
}
void List::deletel()
{
	if (h == nullptr)
	{
		return;
	}
	if (h->n == nullptr)
	{
		delete h;
		return;
	}
	Link * p;
	p = h;
	while ( p->n->n != nullptr)
	{
		p = p->n;
	}
	delete p->n;
	p->n = nullptr;
}
int & List:: operator [](int index)
{
	if (index < 0)
	{
		throw - 1;
	}
	Link * t = h;
	int i = 0;
	while ((t != nullptr) && (i < index))
	{
		i++;
		t = t->n;
	}
	if (t == nullptr)
	{
		throw - 1;
	}
	else
		return t->value;
}
int List::max()
{
	if (h == nullptr)
	{
		throw - 1;
	}
	Link * p;
	p = h;
	int maxelem;
	maxelem = p->value;
	p = p->n;
	while (p != nullptr)
	{
		if (maxelem < p->value)
		{
			maxelem = p->value;
		}
		p = p->n;
	}
	return maxelem;
}
