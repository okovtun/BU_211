#include<iostream>
using namespace std;

//#define LOGICAL_TYPES

void main()
{
	setlocale(LC_ALL, "Rus");
#if defined LOGICAL_TYPES
	cout << "DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
	//bit - Binary Digit (�������� �����) 0 1
#endif

	//char (Character - ������) 1 Byte
	//ASCII - American Standard Code for Information Interchange
}