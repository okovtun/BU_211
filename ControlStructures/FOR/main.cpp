#include<iostream>
using namespace std;

//#define FOR_BASICS
#define FACTORIAL

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n;		//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
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
	int n;
	double  f = 1;
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
#endif // FACTORIAL

}