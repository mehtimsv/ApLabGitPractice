#include <iostream>
#include <string>
#include <math.h>
#include<assert.h>

using namespace std;

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int* producingTheFactorialFractions()
{
	long long int* b = new long long int[10];

	for (int i = 9; i >= 0; i--)
	{
		b[i] = (long long int)pow(factorial(10), 2.0) / (i + 1);
	}
	return b;
}

void checkZeros(long long int* a)
{
	for (int i = 9; i >= 0; i--)
	{
		assert(a[i] != 0);
	}
}

int main()
{

	long long int* a;
	a = producingTheFactorialFractions();
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	delete a;

}