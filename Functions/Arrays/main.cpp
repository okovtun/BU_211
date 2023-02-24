#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
//#include"Print.h"
#include"Print.cpp"
//#include"Sort.h"
#include"Sort.cpp"
//#include"Statistics.h"
#include"StatisticsT.cpp"	//���������� ��������� ������� ����������� ������������ �� ����� ������!!!
//#include"Statistics.cpp"	//���������� ����������� ������� �� � ���� ������ �� ������������ �� ����� ������!!!

//declare - ��������  => declaration - ����������
//define - ���������� => definition - �����������


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	char arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;


	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr_2, ROWS, COLS) << endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
}