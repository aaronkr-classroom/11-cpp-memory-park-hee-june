// pointer.cpp
#include <iostream>

using namespace std;

int main() {
	
	int x = 5;

	int* p = &x;
	cout << "x =" << x << endl;
	cout << "&x =" << &x << endl;
	cout << "p =" << p << endl;

	//p�� �̿��� x���� ����
	*p = 10;
	cout << "x =" << x << endl;
	cout << "&x =" << &x << endl;
	cout << "p =" << p << endl;

	return 0;
}