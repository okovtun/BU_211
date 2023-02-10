#include<iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
void fibonacci(int n, int a = 0, int b = 1);

//#define ELEVATOR
//#define FACTORIAL
//#define POWER

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

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a, n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << power(a, n) << endl;
#endif // POWER

	int n;
	cout << "Введите предельное число: "; cin >> n;
	fibonacci(n);
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
	/*if (n == 0)return 1;
	else return n * factorial(n - 1);*/
	return n == 0 ? 1 : n * factorial(n - 1);
}

double power(double a, int n)
{
	/*if (n == 0)return 1;
	else if (n > 0) return a * power(a, n - 1);
	else return 1 / a * power(a, n + 1);*/

	//return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);//-n - меняем знак на противоположный
}

void fibonacci(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	fibonacci(n, b, a + b);
}