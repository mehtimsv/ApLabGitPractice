#include <iostream>
#include <string>
#include <math.h>
using namespace std;
long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
void producingTheFactorialFractions(unsigned long long int *a)
{
	for (int i = 9; i >= 0; i--)		
		a[i] =(unsigned long long int)pow(factorial(10), 2.0) / (i + 1);
}
void checkZeros(unsigned long long int*a)
{
	for (int i = 9; i >= 0; i--)
		if (a[i] == 0)
			cout << "Zero Found" << endl;
}
int main()
{

	unsigned long long int *a;
	producingTheFactorialFractions(a);
	checkZeros(a);
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;
	delete a;

}

////////////bala codee eslah shodas.paiini code avale ke assertion roosh gozashtam.

//#include <iostream>
//// uncomment to disable assert()
//// #define NDEBUG
//#include <cassert>
//// Use (void) to silent unused warnings.
//#define assertm(exp, msg) assert(((void)msg, exp))
//#include <string>
//#include <math.h>
//
//using namespace std;
//
//long long *b;
//long long c[10];
//long long int factorial(int n)
//{
//	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
//}
//
//long long int *producingTheFactorialFractions()
//{
//    long long b[10];
//	for (int i = 10; i >= 0; i--)
//	{
//		assertm(b[i]!=0,"not initialized");
//		b[i] += (int)pow(factorial(10), 2.0) / (i + 1);
//        assertm(b[i]<0,"Overflow Error");
//		c[i] += (int)pow(factorial(10), 2.0) / (i + 1);
//	}
//	return b;
//}
//
//void checkZeros(long long *a)
//{
//	for (int i = 9; i >= 0; i--)
//	{
//        assertm(a[i]==0,"Zero value");
//		if (a[i] = 0)
//			cout << "Zero Found" << endl;
//	}
//}
//
//int main()
//{
//
//	long long int *a;
//	a = producingTheFactorialFractions();
//	checkZeros(a);
//	for (int i = 0; i < 10; i++)
//	{
//        assertm(c[i]==a[i],"ERROR! garbage value found.");
//		cout << a[i] << endl;
//	}
//	delete a;
//
//}




