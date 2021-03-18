#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long long* b;

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

void producingTheFactorialFractions(long long int* a[])
{

	for (int i = 9; i >= 0; i--)
	{
		*a[i] += (long long int)pow(factorial(10), 2.0) / (i + 1);
	}
}

void checkZeros(long long int* a[])
{
	for (int i = 9; i >= 0; i--)
	{
		if (*a[i] == 0)
			cout << "Zero Found" << endl;
	}
}

int main()
{
	long long int b[10] = { 0 };
	long long int* a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = &b[i];
	}
	producingTheFactorialFractions(a);
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << *a[i] << endl;
	}

	cout << "hello";
	cout << "Bye";


}
