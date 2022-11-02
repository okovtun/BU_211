//Loops
#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef WHILE_1
	int i = 0;	//Счетчик цикла
	int n;		//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << ++i << " Hello Loops" << endl;
		//i++;
	}
	//Loop - петля  
#endif // WHILE

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	char key;	//эта переменная будет хранить код клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши и возвращает
		//ASCII-код нажатой клавиши.
		//Функция _getch() находится в библиотеке conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной 'key' в тип 'int',
		//для того, чтобы увидеть ASCII-код.
	} while (key != Escape);
}