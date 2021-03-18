#include <iostream>
#include <string>
#include <math.h>

using namespace std;

auto* b = new long long[10];

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int* producingTheFactorialFractions()
{
	long long b[10];

	for (int i = 9; i >= 0; i--)///bejaye 10 bayad 9 bashe
	{
		b[i] += (long long int)pow(factorial(10), 2.0) / (i + 1);///bejaye long bayad be longlong cast konim.
	}
	return b;///nemitunim araye ro return konim.
}

void checkZeros(long long* a)
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] == 0)///bayad bejaye =, == mizashtim.
			cout << "Zero Found" << endl;
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

	cout << "hello";
	cout << "Bye";
}