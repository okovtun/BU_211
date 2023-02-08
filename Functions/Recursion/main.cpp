#include<iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);
int factorial(int n);

//#define ELEVATOR

void main()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	//cout << "Hello";
//Stack (Стопка) - это модель памяти, из которой последний записанный элемент считывается первым.
//LIFO - LastIn - FirstOut (Последним зашел - Первым вышел)
//Queue (Очередь) - это модель памяти, из которой первый записанный элемент считывается первым.
//FIFO - FirstIn - FirstOut (Первым зашел - первым вышел)
//Stack overflow exception
//cout << "Для выхода нажмите Esc, для продолжения нажмите любую клавишу" << endl;
//if (_getch() != 27)main();
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
#endif // ELEVATOR

	int n;
	cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << "м этаже\n";
	elevator(floor - 1);	//Рекурсивный вызов функции
	cout << "Вы на " << floor << "м этаже\n";
}

int factorial(int n)
{
	if (n == 0)return 1;
	else return n * factorial(n - 1);
}