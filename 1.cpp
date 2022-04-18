#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long double* b;

long double factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long double* producingTheFactorialFractions()
{
	//memory allocation for b 
	b = new long double[10];

	//i must be 9
	for (int i = 9; i >= 0; i--)
	{
		b[i] = (long double)pow(factorial(10), 2.0) / (i + 1);
	}
	return b;
}

void checkZeros(long double* a)
{
	for (int i = 9; i >= 0; i--)
	{//2 ta mosavy
		if (a[i] == 0)
			cout << "Zero Found" << endl;
	}
}

int main()
{

	long double* a;
	a = producingTheFactorialFractions();
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	delete a;

	cout << "hello";
	cout << "Bye";

	/*
	1.31682e+13
	6.58409e+12
	4.3894e+12
	3.29205e+12
	2.63364e+12
	2.1947e+12
	1.88117e+12
	1.64602e+12
	1.46313e+12
	1.31682e+12
	helloBye
	*/
}