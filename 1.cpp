#include <iostream>
#include <string>
#include <cmath>

using namespace std;

unsigned long long *b;

unsigned long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

unsigned long long int *producingTheFactorialFractions()
{
	b = new unsigned long long[10];

	for (int i = 10; i >= 0; i--)
	{
		b[i] = (int)pow(factorial(i), 2.0) / (i + 1);
	}
	return b;
}

void checkZeros(unsigned long long *a)
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] == 0)
			cout << "Zero Found" << endl;
	}
}

int main()
{
	unsigned long long int *a;
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