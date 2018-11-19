#include "Header.h"
int main()
{
	List A, B; //B(A);
	int k;
	cout << "Original list:\n";
	A.insertf(5);
	A.insertf(71);
	A.insertf(2);
	A.insertf(14);
	A.insertf(33);
	A.insertf(89);
	A.insertf(47);
	A.insertf(19);
	A.insertf(56);
	A.show();
	//B = A;
	cout << "\n\n";
	cout << "Can assign B = A:\n";
	B.show();
	k = A.max();
	cout << "\n";
	cout << "Can to find max element:   ";
	cout << "max=" << k << "\n";
	cout << "\n\n";
	cout << "Can insert last element: \n";
	A.insertl(111);
	A.show();
	cout << "\n\n";
	cout << "Can delete first element: \n";
	A.deletef();
	A.deletef();
	A.deletef();
	A.show();
	cout << "\n\n";
	cout << "Can delete last element: \n";
	A.deletel();
	A.deletel();
	A.show();
	cout << "\n";
	cout << "Can delete all elements\n";
	A.~List();
	A.show();
}
