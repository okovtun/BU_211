
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int lines = 0;
	int symbInLines = 0;
	char symbol = 0;

	cout << "������� ������: ";
	cin >> symbol;
	cout << "���������� �����: ";
	cin >> lines;
	cout << "���������� �������� � ������: ";
	cin >> symbInLines;
	cout << endl;

	for (int i = 1; i <= lines; i++)
	{
		if (i == 1 || i == lines) // 1-� � ��������� ������
		{
			for (int j = 1; j <= symbInLines; j++)
			{
				cout << symbol; // �������� �� ��������
			}
		}
		else
		{
			cout << symbol; // �������� ���� ������
			for (int j = 1; j <= symbInLines - 2; j++)
			{
				cout << ' ';
			}
			cout << symbol;
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}