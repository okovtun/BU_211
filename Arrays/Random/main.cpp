//Random
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	/*
	----------------------------
	������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (RAND_MAX)
	----------------------------
	*/

	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� �����: "; cin >> maxRand;
		if (maxRand <= minRand)cout << "Error: Incorrect values" << endl;
	} while (maxRand <= minRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//����� ��������� �������:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
	//���������� �������:

	
	//����� ���������������� �������:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}