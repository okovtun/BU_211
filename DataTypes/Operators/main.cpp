//Operators
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS		//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR			//2) Оператор присваивания = 
//#define INCREMENT_DECREMENT			//3) Increment/Decrement(++/--)
//#define COMPOUND_ASSIGNMENTS			//4) Составные присваивания
#define COMPARISON_OPERATORS			//5) Операторы сравнения

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef ARITHMETICAL_OPERATORS
	cout << "Hello Operators" << endl;
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary asterisk
	//*3;	//Have no sense!!!

	//Unary: +, -;
	//Binary:+, -, *, /, %;
	//		 % - остаток от деления (modulo)
	cout << 17. / 5 << endl;
	//cout << 17 % 5. << endl;
	//Integer - целое число
	//Integral - целочисленный  
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
			//			l-value = r-value;

//int a = 2;	//переменной 'a' присваиваем значение '2' (Assign '2' to 'a')
//int b = a;	//переменной 'b' присвоить значение переменной 'a'
//int c = (a + b * 4) / 5;

	2 + 3 + 8 + 4;

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор....
//Prefix
//Postfix
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement 

	int j = ++i;

	cout << i << endl;	//1
	cout << j << endl;	//1  
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;

	//a = a + b;		a += b;
	//a = a - b;		a -= b;
	//a = a * b;		a *= b;
	//a = a / b;		a /= b;
	//a = a % b;		a %= b;

	a + b;	//Оператор + просто возвращает сумму
	a += b;	//Оператор += возвращает сумму и сохраняет ее в операнд слева

	a + b;	//Оператор "Сложить"
	a += b;	//Оператор "Прибавить"

	a - b;	//Оператор "Вычесть"
	a -= b;	//Оператор "Отнять"  
#endif // COMPOUND_ASSIGNMENTS

	cout << (!true == false) << endl;
}