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
//Stack (������) - ��� ������ ������, �� ������� ��������� ���������� ������� ����������� ������.
//LIFO - LastIn - FirstOut (��������� ����� - ������ �����)
//Queue (�������) - ��� ������ ������, �� ������� ������ ���������� ������� ����������� ������.
//FIFO - FirstIn - FirstOut (������ ����� - ������ �����)
//Stack overflow exception
//cout << "��� ������ ������� Esc, ��� ����������� ������� ����� �������" << endl;
//if (_getch() != 27)main();
	int n;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);
#endif // ELEVATOR

	int n;
	cout << "������� �����: "; cin >> n;
	cout << factorial(n) << endl;
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << "� �����\n";
	elevator(floor - 1);	//����������� ����� �������
	cout << "�� �� " << floor << "� �����\n";
}

int factorial(int n)
{
	if (n == 0)return 1;
	else return n * factorial(n - 1);
}