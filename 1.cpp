#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long long int *b;// :|

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int *producingTheFactorialFractions()
{
    long long int* b = new long long int[10];//assigning memory.

	for (int i = 9; i >= 0; i--)//changing i.
	{
		b[i] = (long long int)pow(factorial(10), 2.0) / (i + 1);//changing int to long long int.
	}
	return b;
}

void checkZeros(long long int* a)//changing long long to long long int.
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] == 0)//changing = to ==. 
			cout << "Zero Found" << endl;
	}
}

int main()
{

	long long int *a = new long long int[10];//new assigning memory.
	a = producingTheFactorialFractions();
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	delete a;

	cout<<"hello" << endl;
	cout<<"Bye";


}
