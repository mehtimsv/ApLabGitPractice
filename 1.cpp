#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int *producingTheFactorialFractions(long long int *b)
{
	for (int i = 9; i >= 0; i--) // changed 10 to 9
	{
		b[i] += (long long int)pow((double)factorial(10), 2.0) / (i + 1); // change int to long long int
	}
	return b;
}

void checkZeros(long long *a)
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] == 0) // change = to ==
			cout << "Zero Found" << endl;
	}
}

int main()
{
	long long int *a = new long long int; // use heap
	a = producingTheFactorialFractions(a);
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	cout << "hello" << endl;
	cout << "Bye";
	delete a; // for leak of memory
	return 0;
}