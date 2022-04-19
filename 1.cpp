#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long double *b;

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long double *producingTheFactorialFractions()
{
	// memory allocation
	b = new long double[10];

	// 10 -> 9
	for (int i = 9; i >= 0; i--)
	{
		// equal
		b[i] = (long double)(pow(factorial(10), 2.0) / (i + 1));
	}
	return b;
}

void checkZeros(long double *a)
{
	for (int i = 9; i >= 0; i--)
	{
		// equality oprator
		if (a[i] == 0)
			cout << "Zero Found" << endl;
	}
}

int main()
{

	long double *a;
	a = producingTheFactorialFractions();
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	delete a;

	cout << "hello";
	cout << "Bye";
}


//javab
// 1.31682e+013
// 6.58409e+012
// 4.3894e+012
// 3.29205e+012
// 2.63364e+012
// 2.1947e+012
// 1.88117e+012
// 1.64602e+012
// 1.46313e+012
// 1.31682e+012
// helloBye