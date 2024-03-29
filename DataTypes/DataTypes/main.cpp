﻿#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n------------------------------------------------\n"

//#define LOGICAL_TYPES	//логические типы
//#define NUMERIC_TYPES	//числовые типы
//#define VARIABLES		//переменные

void main()
{
	setlocale(LC_ALL, "Rus");
#if defined LOGICAL_TYPES
	cout << "DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
	//bit - Binary Digit (Двоичная цифра) 0 1
#endif
	//char (Character - Символ) 1 Byte
	//ASCII - American Standard Code for Information Interchange
#if defined NUMERIC_TYPES
	cout << sizeof(long long) << endl;
	cout << ULLONG_MAX << endl;
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << delimiter << endl;

	//float - вещественный тип одинарной точности 4 Bytes 
	//double - вещественный тип двойной точности 8 Bytes 
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << delimiter << endl;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif

#if defined VARIABLES
	int a;
	int _1stPlace;
	double price;
	double price_of_coffee;
	int number_of_cups;
	//snake_case_style
	//pascalCaseStyle
	//PascalCaseStyle
	//camalCaseStyle
	//smallCamel
	//BigCamel
	cout << "Введите стоимость чашки кофе: ";cin >> price_of_coffee;
	cout << "Введите количество чашек: "; cin >> number_of_cups;
	//проинициализировать
	cout << price_of_coffee << endl;
	cout << number_of_cups << endl;
	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость покупки: " << total_price << endl;
	//инициализация - это присвоение начального значения.
#endif

	int speed = 0;		//скорость
	const int MAX_SPEED = 250;

	5; //числовая константа типа (int)
	5.; //числовая константа типа (double)
	.5; //числовая константа типа (double)
	cout << sizeof(5) << endl;
	cout << typeid(5ULL).name() << endl;
	double price = 0;
	cout << price << endl;

	'+';	//символьная константа
	cout << '+' << endl;
	cout << typeid('+').name() << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
	/*
	\xXX
	  XX - ASCII-код символа в шестнадцатеричной системе счисления (Hex)
	  */
	cout << '\x2B' << endl;
	cout << (int)'!' << endl;
	cout << '\x21' << endl;
}

//identifier - это имя
/*
--------------------------------------------
1. ABC...Zabc...z012...9_;
2. 
3.
4. 
--------------------------------------------
*/