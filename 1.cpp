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
	long long int* b = new long long int[10];				//functionbs can't return arrays in c++.in order to return the array by function,we can use dynamically allocated array 

	for (int i = 9; i >= 0; i--)				// the size of b is 10 so the last element of it, is b[9] ---> i should be 9 at first
	{
		b[i] = (long long int)pow(factorial(10), 2) / (i + 1);				//cast to long long int. because the outputs are very long.
	}
	return b;
}

void checkZeros(long long* a)
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] == 0)							//to compare two thing we should use two =.
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

	cout<<"hello";
	cout<<"Bye";


}