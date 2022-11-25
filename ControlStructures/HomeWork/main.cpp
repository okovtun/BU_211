#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FIBONACHI
//#define FIBONACHI1
#define FIBONACHI2

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef FIBONACHI

	int a, b, sum;
	int n;
	a = sum = 0;
	b = 1;
	cout << " введите предельное число  "; cin >> n;
	while (sum < n)
	{
		sum = a + b;
		//cout << a << endl;
		a = b;
		b = sum;
		cout << a << endl;
		sum++;

	}
	cout << endl;
#endif // FIBONACHI

#ifdef FIBONACHI1

	int a = 0;
	int b = 1;
	int n;

	cout << " введите предельное число  "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << a << endl;
		a = a + b;
		b = a - b;

	}
#endif // FIBONACHI1
#ifdef FIBONACHI2

	int a = 0;
	int b = 1;
	int n;
	int t;

	cout << " введите предельное число  "; cin >> n;
	cout << " введите сколько чисел из ряда нужно вывести  "; cin >> t;
	for (int i = 0; i < n; i++)
	{
		cout << a << endl;
		a = a + b;
		b = a - b;
	}
	cout << endl;
	for (int j = 0; j < t; j++)
	{
		cout << a - a << endl;
		a = a + b;
		b = a - b;
		cout << a << endl;
	}
#endif // FIBONACHI2
}