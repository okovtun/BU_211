#include<iostream>
using namespace std;

//#define PALINDROME
#define TICKET

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROME
	int number;			//�����, ��������� � ����������
	int reverse = 0;	//�����, ���������� ��������
	cout << "������� �����: "; cin >> number;
	int buffer = number;//����� �����, ���������� � ����������
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;	//��������� ������� ������ � reverse
		buffer /= 10;			//������� ������� ������ �� buffer
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
#endif // PALINDROME

#ifdef TICKET
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "������� ����� ������: "; cin >> number;
	while (number >= 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "JackPot" << endl;
	}
	else
	{
		cout << "May be the next time" << endl;
	}
#endif // TICKET

}