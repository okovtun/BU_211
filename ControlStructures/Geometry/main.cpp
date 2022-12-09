#include<iostream>
using namespace std;

//#define SQUARE
//#define TRINAGLE_1
//#define TRINAGLE_2
//#define TRINAGLE_3
//#define TRINAGLE_4

void main()
{
	setlocale(LC_ALL, "");
	int n;		//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRINAGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINAGLE_1

#ifdef TRINAGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINAGLE_2

#ifdef TRINAGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRINAGLE_3

#ifdef TRINAGLE_4
	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j < n; j++)cout << "  ";
		for (int j = 0; j < i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRINAGLE_4

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)
			//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;
}