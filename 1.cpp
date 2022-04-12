#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long long *b;

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int *producingTheFactorialFractions()
{
    //delet long long b[10];
	b = new long long [10]; //assign memory
	// i = 9
	for (int i =9; i >= 0; i--)
	{
		b[i] = (long long int)pow(factorial(10), 2.0) / (i + 1);// long long int
	}
	return b;
}

void checkZeros(long long *a)
{
	for (int i = 9; i >= 0; i--)
	{
		// we need == not =
		if (a[i] == 0)
			cout << "Zero Found" << endl;
	}
}

int main()
{

	long long int *a ;///
	a = producingTheFactorialFractions();
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	delete a;

	//add endl
	cout<<"hello"<<endl;
	cout<<"Bye";


}