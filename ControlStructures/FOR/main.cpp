#include<iostream>
using namespace std;

//#define FOR_BASICS
#define FACTORIAL

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n;		//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	for (int i = 0;
		i < n;
		i++)
	{
		//cout << "Hello FOR" << endl;
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

#ifdef FACTORIAL

#endif // FACTORIAL

}