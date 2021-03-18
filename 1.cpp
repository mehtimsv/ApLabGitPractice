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
	//static long long b[10];
	long long* b = new long long[10];//in c++ we cant  return array because it can return garbagr value in place of that we can use this method (using new)
	//or we can use static before long long b[10];

	for (int i = 9; i >= 0; i--)//i=10 is out of array range
	{
		b[i] = (long long int)pow(factorial(10), 2.0) / (i + 1);//long long int because outputs are too long and according to size of array b;
	}
	return b;
}
void checkZeros(long long* a)
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] == 0)//in if for comparing two variables we should use operator ==
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
	delete[] a;// allocated memory must be deleted

	cout<<"hello";
	cout<<"Bye";


}