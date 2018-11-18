#include "Header.h"
int main()
{
	List A, B;
	int k;
	A.insertf(5);
	A.insertf(71);
	A.insertf(2);
	A.insertf(14);
	A.insertf(33);
	A.insertf(89);
	A.insertf(47);
	A.show();
	B = A;
	B.show();
	k = A.max();
	cout << "\n";
	cout << "Can to find max element:  ";
	cout << "max=" << k << "\n";
	cout << "\n\n";
	cout << "Can insert last element\n";
	//A.insertl(111);
	A.show();
	cout << "\n";
	cout << "Can delete all elements\n";
	//A.~List();
	A.show();
}

