#include <iostream>
using namespace std;


//#define task_1_error
//#define TASK_1
//#define TASK_2_ERROR
//#define TASK_2
//#define TASK_3
//#define FIBOBAHI
//#define SHAPES
#define chess
void main()

{
	setlocale(LC_ALL, "Rus");

#if defined task_1_error 
	int factorial, i, b, number;
	i = 1;

	b = 1;
	cout << "������� ���������" << endl; cin >> number;
	if (number == 1)
	{
		cout << "��������� ����� :" "1";
	}
	else
	{
		while (i >= number)
		{
			++b;
			factorial = i * b; // ���� ��, � ����������� ��������� �� ��� �����������, ����� ������ �������.
			++i;
			if (i == number)
			{
				cout << factorial << endl; // ������� ��� ���� ������� ��������� ������� ��� � �������
			}
		}
		//cout << factorial << endl; //�� ����� ���������������� ���������� ���������, �.�. �� ������������� �������� ������ ����� while � �� ����� �� ��� ���������. �� ������ ������, ��� ������� �������� � ���� ������� �������.
	}

#endif
#if defined TASK_1
	int number, fact = 1, i = 1;// ��� ������� ������ �����
	cout << "������� ����� ��� ���������� � ���������: "; cin >> number;
	while (i++ <= number) //���������� ���� i <= number. �� ����� �������� �� 1 ������� ������, � ��������� ��� ����� ��. ����� ������������ ���������� ���������.
	{
		fact *= i; // fact = fact * i = ���� ������ ��������� �������� ����������, �� �� �� ����� ����� �� ��������� �������. (��� � ������ ������) ��������� ������������ �������� ���� �������� ��� ������� ����������
		//++i; // ++i ����������� ����� �� 1 ��� �� ���� ���������� �� ��� ����������, ����� ������ ��������� ++i � ������� � ��� ������ ��������� ���. ����� 1 �������
	}
	cout << "��������� ����� " << number << " = " << fact;
#endif
#if defined TASK_2_ERROR
	double num;
	int degree, res;
	int i = 1;
	cout << "������� ����� ������� ������ �������� � �������: "; cin >> num; // �������� 5
	cout << "������� ������� � ������� ������ �������� �����: "; cin >> degree; // �������� 3
	//� ���, 5*5*5. ��� ��� ���. 
	if (degree == 1)
	{
		cout << "�����: " << num;
	}
	else if (degree == 2)
	{
		res = num * num;
		cout << "�����: " << res;
	}
	else if (degree == 3)
	{
		res = num * num * num;
		cout << "�����: " << res;
	}
	else if (degree == 4)
	{
		res = num * num * num * num;
		cout << "�����: " << res;
	}// � ��� �� ������������� ������ �����, �� ��� ������ � ����� �������. ����� ���������.
#endif
#if defined TASK_2_ERROR
	double num;
	int degree;
	int i = 1;
	cout << "������� ����� ������� ������ �������� � �������: "; cin >> num; // �������� 5
	cout << "������� ������� � ������� ������ �������� �����: "; cin >> degree; // �������� 3
	int n = num; // ��� ���� ��� �� ��������� ���� ����� � ����������� ����, ���� ������� ���� num *= num ����� ������ �������� ��������� �������� ��������� ������������� �����, � ����� ��� �� �����.
	while (i++ < degree) // ����� ���������� ����� ��������� ����� ������ ������. �.�. � �� ����� ���� ��� ������� ����������� �������� ���������� �� ����� �� ������� ��� � ������� ���������� ����������. ������ � ����� ������������� �� �����.
	{
		//num *= num; //��� ��, �� �� ���� ��� num ������ ��� ����, �� ������������� ���� �������. ���������� ����� �� ����.����� ��� �� ��������� ����� �������������� �������� ����� ��������� �������������
		num *= n; // ��� ������� ������ 2 ���� n ���������� �� �����, � ��������� ����� �� ������ ������� ���� ������������, � �� ���� ��������� num ��� ����� ���� � ���� ��������� ���������� ��������� ��� ����������� �������� �����.
	}
	cout << n << " � ������� " << degree << " ����� : " << num << endl;
	cout << n << " ^ " << degree << " = " << num; // ����������� ������� ������ ������������ � ����������

#endif
#if defined TASK_2
	int o = 0; //�������

	while (o++ <= 255) // ASCII ��� ��� 1 ���� ����������, ��� �� 8 ���. 1 ��� ��� 0 ��� 1. �� 1 ����� (8 ���) ����� ��������� 256 ��������� ����������. ������� ASCII ���� 256 ��������. �� 0 �� 255.
	{
		cout << (char)o << "\t" << o << endl; //������� ���������� ����� �������� ������, ������ ��������(�� ����� �� ���������� � int, � ��� � char. �� ������ �� ��������. ���� ������ ������������ ��� ���� �� �������� �������� ���� ����.

	} //������ �� ����� ����� ��� ��� �������, ����� � ������ � ������� _getch � ���. � ��� ������ ������� ��� ������� ���������� �����, ������ ��� ����� �� �������, ������ ��������.
#endif
#if defined FIBOBAHI
	int n;
	int r = 1;
	cout << "������� ��������� ����� �����: "; cin >> n;
	for (int i = 0; r < n; i++)
	{
		r += r;
		cout << r << "\t";
	}
#endif
#if defined SHAPES
	cout << "0" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	cout << "1" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	cout << "2" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << "";
			}
		}
		cout << endl;
	}
	cout << endl;

	cout << "3" << endl;
	for (int i = 0;
		i < 5;
		i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	cout << "4" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
#endif

#if defined chess
	int num;
	cout << "������� ������ �����: "; cin >> num;
	setlocale(LC_ALL, "C");
	int nu = 1;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "  " << char(i + 'A') << "       ";
	}
	cout << endl << "  ";
	for (int p = 0; p < num; p++)
	{
		for (int t = 0; t < 10; t++)
		{
			cout << char(22);
		}
	}

	cout << endl;
	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < 1; i++)
		{
			if ((i + j) % 2)
			{
				for (int i = 0; i < 5; i++)
				{
					(i == 0) ? cout << nu << "|" : cout << " |";
					for (int p = 0; p < num; p++)
					{
						(p % 2) ? cout << "* * * * * " : cout << "          ";
					}
					(i == 0) ? cout << "|" << nu : cout << "|";
					cout << endl;
				}
				nu++;
			}
			else
			{
				for (int i = 0; i < 5; i++)
				{
					(i == 0) ? cout << nu << "|" : cout << " |";
					for (int p = 0; p < num; p++)
					{
						(p % 2) ? cout << "          " : cout << "* * * * * ";
					}
					(i == 0) ? cout << "|" << nu : cout << "|";
					cout << endl;
				}
				nu++;
			}

		}
	}
	cout << "  ";
	for (int p = 0; p < num; p++)
	{
		for (int t = 0; t < 10; t++)
		{
			cout << char(22);
		}
	}
	cout << endl;
	for (int p = 0; p <= num; p++)
	{
		(p == 0) ? cout << "  " : cout << char(p + 64) << "         ";

	}
	cout << endl;
#endif

	int n;
	cout << "������� ������ �����: ";  cin >> n;
	setlocale(LC_ALL, "C");
	for (int t = 0; t < 2; t++)
		if (t == 1)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					(j != i) ? cout << " " : cout << char(92);
				}
				//cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					(i + j < (n - 1) || i + j != (n - 1)) ? cout << " " : cout << "/";
				}
				cout << endl;
			}
			t++;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					(i + j < (n - 1) || i + j != (n - 1)) ? cout << " " : cout << "/";
				}
				cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					(j != i) ? cout << " " : cout << char(92);
				}
				cout << endl;
			}
		}
}
