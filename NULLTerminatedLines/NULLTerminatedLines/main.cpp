#include<Windows.h>
#include<iostream>
using namespace std;

int StringLength(const char* str);
char* to_upper(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	//NULL Terminated Lines
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//cout << str << endl;
	//str[2] = 0;
	/*char str[] = "Hello";
	cout << str << endl;
	cout << sizeof(str) << endl;*/

	cout << 'a' - 'A' << endl;

	const int n = 256;
	char str[n] = {};
	cout << "Введите строку: ";
	//cin >> str;
	SetConsoleCP(1251);
	cin.getline(str, n);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "Размер строки: " << StringLength(str) << endl;
	cout << to_upper(str) << endl;
}

int StringLength(const char* str)
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
char* to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')str[i] -= ' ';
		if (str[i] >= 'а' && str[i] <= 'я')str[i] -= ' ';
	}
	return str;
}