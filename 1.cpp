#include <iostream>
#include <string>
#include <math.h>
using namespace std;
long long* b;
long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
long long int* producingTheFactorialFractions()
{
	long long* b = new long long[10]; //we should use new
	for (int i = 9; i >= 0; i--) //
	{
		b[i] = 0; //the first value must be 0 not garbage
		b[i] += (long long int)pow(factorial(10), 2.0) / (i + 1);
	}
	return b;
}
void checkZeros(long long* a)
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] == 0)//put==
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
	delete (a);
}