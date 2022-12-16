#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"	//(char)219
#define BLACK_BOX			"  "

/*
------------
Escape-последовательность '\x' позволяет вставить в строку символ по ASCII-коду
'\xXX' где XX - ASCII-код символа в шестнадцатеричной системе счисления (Hexadecimal)
------------
*/

//#define ASCII
//#define CHESS_1
#define CHESS_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef ASCII
	cout << "ASCII-таблица:\n";
	setlocale(LC_ALL, "C");
	for (int i = 176; i < 224; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << "\t" << (char)i << endl;
	}
#endif // ASCII

	int n;
	cout << "Введите размер доски: "; cin >> n;
#ifdef CHESS_1
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
			//(i % 2 == j % 2)?cout << WHITE_BOX << WHITE_BOX:cout << "  ";
			//if (i % 2 == j % 2)cout << WHITE_BOX << WHITE_BOX;else cout << "  ";
		}
		cout << endl;
	}
#endif // CHESS_1

#ifdef CHESS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // CHESS_2

}