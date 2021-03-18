#include <iostream>
#include <string>
#include <math.h>
#include<cassert>
using namespace std;

//long long int* m;
void test_factorial();

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int* producingTheFactorialFractions()
{
	long long int b[10] = { 0 };
	//int i = 10
	long long int m;
	for (int i = 9; i >= 0; i--)
	{			//(int)
		m = (long long int)pow(factorial(10), 2.0);
		b[i] += (long long int)pow(factorial(10), 2.0) / (i + 1);
	}
	return b;
}

void checkZeros(long long int a[10])
{
	for (int i = 9; i >= 0; i--)
	{	//a[i] = 0
		if (a[0] == 0)
			cout << "Zero Found" << endl;
	}
}

int main()
{

	long long int* a;
	//
	a = new long long int[10];
	a = producingTheFactorialFractions();

	long long int a2[10];
	for (int i = 0; i < 10; i++)
		a2[i] = a[i];

	checkZeros(a2);

	for (int i = 0; i < 10; i++)
	{
		cout << a2[i] << endl;
	}
	//delete[] a;
}

void test_factorial()
{
	long long int a = factorial(10);
	assert(a == 3628800);
}
