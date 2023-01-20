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
	Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
	----------------------------
	*/

	int minRand, maxRand;
	do
	{
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимально случайное число: "; cin >> maxRand;
		if (maxRand <= minRand)cout << "Error: Incorrect values" << endl;
	} while (maxRand <= minRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//Вывод исходного массива:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
	//Сортировка массива:

	
	//Вывод отсортированного массива:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}