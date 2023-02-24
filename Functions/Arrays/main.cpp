#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
//#include"Print.h"
#include"Print.cpp"
//#include"Sort.h"
#include"Sort.cpp"
//#include"Statistics.h"
#include"StatisticsT.cpp"	//РЕАЛИЗАЦИИ ШАБЛОННЫХ ФУНКЦИЙ ОБЯЗАТЕЛЬНО ПОДКЛЮЧАЮТСЯ НА МЕСТО ВЫЗОВА!!!
//#include"Statistics.cpp"	//Реализации НЕшаблонных функций ни в коем случае НЕ подключаются на место вызова!!!

//declare - объявить  => declaration - объявление
//define - определить => definition - определение


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	char arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;


	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
}