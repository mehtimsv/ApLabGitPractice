#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long long int* b;// why did you define it ?:) anyway let this variable live it will change nothing

long long int factorial(int n)//i think this function is ok
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int *producingTheFactorialFractions()
{
    long long int *b = new long long int  [10];// i changed it to a pointer . so no error accured

	for (int i = 9; i >= 0; i--) // i starts from 9 not 10
	{
		b[i] = (long long int)pow(factorial(10), 2) / (i + 1);// i changed int to a long long int

	}

	return b;
}

void checkZeros(long long int* a)
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] == 0)// here must be == not =
			cout << "Zero Found" << endl;
	}
}

int main()
{

	long long int *a = new long long int[10]; // must use new
	a = producingTheFactorialFractions();
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	delete a;

	cout<<"hello";
	cout<<"Bye";


}
