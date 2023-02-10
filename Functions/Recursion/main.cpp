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

#ifdef FACTORIAL
	int n;
	cout << "������� �����: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a, n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << power(a, n) << endl;
#endif // POWER

	int n;
	cout << "������� ���������� �����: "; cin >> n;
	fibonacci(n);
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
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);//-n - ������ ���� �� ���������������
}

void fibonacci(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	fibonacci(n, b, a + b);
}