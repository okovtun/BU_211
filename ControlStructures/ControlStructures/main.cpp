//ControlStructures
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define TARGET

void main()
{
	setlocale(LC_ALL, "");

#ifdef TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 60)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 33)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 5)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Холодно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -40)
	{
		cout << "Сильный мороз" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "Введите число: "; cin >> n;
	if (n > 0 && n < 10)	//если
	{
		cout << "Цель поражена" << endl;
	}
	else //в противном случае (иначе)
	{
		cout << "Вы Firefox" << endl;
	}
#endif // TARGET

	double a, b;	//числа, введенные пользователем
	char s;	//Sign - знак операции
	cout << "Введите арифметическое выражение: "; 
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
}