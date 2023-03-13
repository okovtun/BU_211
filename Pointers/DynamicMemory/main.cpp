#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

int* push_back(int arr[], int& n, int value);

int* pop_back(int arr[], int& n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "Введите значение добавляемого элемента: "; cin >> value;
	
	arr = push_back(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);

	delete[] arr;
	//Memory leaks
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//обращение к элементам массива через 
		//арифметику указателей и оператор разыменования:
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//обращение к элементам массива через оператор индексирования:
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int* push_back(int arr[], int& n, int value)
{
	//1) Созжаем новый массив нужного рамера:
	int* buffer = new int[n + 1];
	//2) Копируем все содержимое исходного массива в новый:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив:
	delete[] arr;
	//4) Подменяем адрес старого массива, адресом нового массива:
	arr = buffer;
	//5) Только после всего этого в массиве 'arr' появляется элемент, 
	//	 в котороый можно сохранить добавляемое значение:
	arr[n] = value;
	//6) После добавления элемента в массив, количество его элементов увеличивается на 1:
	n++;
	return arr;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}