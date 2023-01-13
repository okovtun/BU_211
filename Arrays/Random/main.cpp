//Random
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	/*
	----------------------------
	‘ункци€ rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
	----------------------------
	*/

	int minRand, maxRand;
	cout << "¬ведите минимальное случайное число: "; cin >> minRand;
	cout << "¬ведите максимально случайное число: "; cin >> maxRand;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}