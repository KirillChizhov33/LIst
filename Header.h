#include <iostream>
using namespace std;
#pragma once
struct Link
{
	int value;
	Link * n;
};
class List
{
	Link * h; // Указатель на голову
public:
	List();
	List(const List &b);
	~List();
	void insertf(int value);
	void show();
	void deletef();
	void insertl(int value);
	void deletel();
	int & operator [](int index);
	int max();
};
