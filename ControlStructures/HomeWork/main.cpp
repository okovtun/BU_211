#include <iostream>
using namespace std;


//#define task_1_error
//#define TASK_1
//#define TASK_2_ERROR
//#define TASK_2
//#define TASK_3
//#define FIBOBAHI
//#define SHAPES
#define chess
void main()

{
	setlocale(LC_ALL, "Rus");

#if defined task_1_error 
	int factorial, i, b, number;
	i = 1;

	b = 1;
	cout << "Введите факториал" << endl; cin >> number;
	if (number == 1)
	{
		cout << "Факториал равен :" "1";
	}
	else
	{
		while (i >= number)
		{
			++b;
			factorial = i * b; // мммм да, а оказывается факториал не так вычесляется, нужно менять формулу.
			++i;
			if (i == number)
			{
				cout << factorial << endl; // попытка все таки вывести результат оставив его в функции
			}
		}
		//cout << factorial << endl; //не может инициализировать переменную факториал, т.к. ее инициализация проходит внутри цикла while и не видна за его приделами. На данный момент, это главная проблема в моем способе решения.
	}

#endif
#if defined TASK_1
	int number, fact = 1, i = 1;// еще немного меньше строк
	cout << "ВВедите число для возведения в факториал: "; cin >> number;
	while (i++ <= number) //изначально было i <= number. Но тогда выходило на 1 строчку больше, а результат был таким же. вожно использовать префексный инкримент.
	{
		fact *= i; // fact = fact * i = если просто присвоить значения факториалу, то он не будет виден за приделами функции. (как в первой задаче) Составные присваивания изменяет само значение уже заданой переменной
		//++i; // ++i увеличивает число на 1 что бы цикл повторялся НО как выяснилось, можно просто поставить ++i в условие и еще больше сократить код. минус 1 строчка
	}
	cout << "Факториал числа " << number << " = " << fact;
#endif
#if defined TASK_2_ERROR
	double num;
	int degree, res;
	int i = 1;
	cout << "введите число которое хотите возвести в степень: "; cin >> num; // допустим 5
	cout << "Введите степень в которое хотите возвести число: "; cin >> degree; // допустим 3
	//и так, 5*5*5. пум пум пум. 
	if (degree == 1)
	{
		cout << "ответ: " << num;
	}
	else if (degree == 2)
	{
		res = num * num;
		cout << "ответ: " << res;
	}
	else if (degree == 3)
	{
		res = num * num * num;
		cout << "ответ: " << res;
	}
	else if (degree == 4)
	{
		res = num * num * num * num;
		cout << "ответ: " << res;
	}// и так до бесконечности писать можно, но это долгое и тупое решение. Нужно зациклить.
#endif
#if defined TASK_2_ERROR
	double num;
	int degree;
	int i = 1;
	cout << "введите число которое хотите возвести в степень: "; cin >> num; // допустим 5
	cout << "Введите степень в которое хотите возвести число: "; cin >> degree; // допустим 3
	int n = num; // для того что бы сохранить наше число в изначальном виде, дабы формула нижу num *= num будет просто изменять начальное значение введеного пользователем числа, а этого нам не нужно.
	while (i++ < degree) // ответ становится более очевидном после первой задачи. Т.к. я не особо знаю как вывести присвоенное значение переменной из цикла не изменяя его с помощью составного присвоения. Значит и будем отталкиваться от этого.
	{
		//num *= num; //ммм да, из за того что num меняет сам себя, он перепрыгивает одну степень. Получается какой то бред.Нужно где то сохранить число первоначальное значение числа введеного пользователем
		num *= n; // при степени больше 2 наша n изменяться не будет, а останется таким же числом который ввел пользователь, а за счет изменения num оно будет само в себе сохранять предыдущей результат для следующнего действия цикла.
	}
	cout << n << " в степени " << degree << " равна : " << num << endl;
	cout << n << " ^ " << degree << " = " << num; // аналогичный варинат ответа пользователю в сокращении

#endif
#if defined TASK_2
	int o = 0; //счетчик

	while (o++ <= 255) // ASCII код это 1 байт информации, или же 8 бит. 1 бит это 0 или 1. из 1 байта (8 бит) можно составить 256 различных комбинаций. Таблица ASCII кода 256 символов. от 0 до 255.
	{
		cout << (char)o << "\t" << o << endl; //задание аналогично нашей классной работе, только наоборот(на уроке мы переводили в int, а тут в char. хз почему он пиликает. Могу только догадываться что один из символов вызывает этот звук.

	} //вообще не долго думал как это сделать, зашел в проект с работой _getch и там. И там первое задание это счетчик аналогично моему, второе это такое же задание, только наоборот.
#endif
#if defined FIBOBAHI
	int n;
	int r = 1;
	cout << "Введите предельно число число: "; cin >> n;
	for (int i = 0; r < n; i++)
	{
		r += r;
		cout << r << "\t";
	}
#endif
#if defined SHAPES
	cout << "0" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	cout << "1" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	cout << "2" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << "";
			}
		}
		cout << endl;
	}
	cout << endl;

	cout << "3" << endl;
	for (int i = 0;
		i < 5;
		i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	cout << "4" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
#endif

#if defined chess
	int num;
	cout << "Введите размер доски: "; cin >> num;
	setlocale(LC_ALL, "C");
	int nu = 1;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "  " << char(i + 'A') << "       ";
	}
	cout << endl << "  ";
	for (int p = 0; p < num; p++)
	{
		for (int t = 0; t < 10; t++)
		{
			cout << char(22);
		}
	}

	cout << endl;
	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < 1; i++)
		{
			if ((i + j) % 2)
			{
				for (int i = 0; i < 5; i++)
				{
					(i == 0) ? cout << nu << "|" : cout << " |";
					for (int p = 0; p < num; p++)
					{
						(p % 2) ? cout << "* * * * * " : cout << "          ";
					}
					(i == 0) ? cout << "|" << nu : cout << "|";
					cout << endl;
				}
				nu++;
			}
			else
			{
				for (int i = 0; i < 5; i++)
				{
					(i == 0) ? cout << nu << "|" : cout << " |";
					for (int p = 0; p < num; p++)
					{
						(p % 2) ? cout << "          " : cout << "* * * * * ";
					}
					(i == 0) ? cout << "|" << nu : cout << "|";
					cout << endl;
				}
				nu++;
			}

		}
	}
	cout << "  ";
	for (int p = 0; p < num; p++)
	{
		for (int t = 0; t < 10; t++)
		{
			cout << char(22);
		}
	}
	cout << endl;
	for (int p = 0; p <= num; p++)
	{
		(p == 0) ? cout << "  " : cout << char(p + 64) << "         ";

	}
	cout << endl;
#endif

	int n;
	cout << "ВВедите размер ромба: ";  cin >> n;
	setlocale(LC_ALL, "C");
	for (int t = 0; t < 2; t++)
		if (t == 1)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					(j != i) ? cout << " " : cout << char(92);
				}
				//cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					(i + j < (n - 1) || i + j != (n - 1)) ? cout << " " : cout << "/";
				}
				cout << endl;
			}
			t++;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					(i + j < (n - 1) || i + j != (n - 1)) ? cout << " " : cout << "/";
				}
				cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					(j != i) ? cout << " " : cout << char(92);
				}
				cout << endl;
			}
		}
}
