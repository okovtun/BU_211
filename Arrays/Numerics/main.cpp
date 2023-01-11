#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;	//максимально возможная разрядность числа типа 'int'
	bool bin[n] = {};	//bin - Binary, этот массив будет хранить разряды (биты) двоичного числа.
}