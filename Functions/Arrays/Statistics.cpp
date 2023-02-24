#include"Statistics.h"

int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

const char* Avg(char arr[], const int n)
{
	return "No AVG for char";
}
