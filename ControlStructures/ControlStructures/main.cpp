//ControlStructures
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE

void main()
{
	setlocale(LC_ALL, "");

#ifdef TEMPERATURE
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 60)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 33)
	{
		cout << "����� �����" << endl;
	}
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 5)
	{
		cout << "���������" << endl;
	}
	else if (temperature > 0)
	{
		cout << "�������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -40)
	{
		cout << "������� �����" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
#endif // TEMPERATURE

	int n;
	cout << "������� �����: "; cin >> n;
	if (n > 0 && n < 10)	//����
	{
		cout << "���� ��������" << endl;
	}
	else //� ��������� ������ (�����)
	{
		cout << "�� Firefox" << endl;
	}
}