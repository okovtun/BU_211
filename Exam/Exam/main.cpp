#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//cout << sizeof("Hello") << endl;
	int a = 2;
	int* pa = &a;
	cout << pa << endl;
	cout << sizeof(pa) << endl;

}