#include<iostream>
using namespace std;

//#define PALINDROME
#define TICKET

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROME
	int number;			//Число, введенное с клавиатуры
	int reverse = 0;	//Число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number;//Копия числа, введенного с клавиатуры
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;	//Сохраняем младший разряд в reverse
		buffer /= 10;			//убираем младший разряд из buffer
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Падиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}
#endif // PALINDROME

#ifdef TICKET
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "Введите номер билета: "; cin >> number;
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