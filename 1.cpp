#include <iostream>///last :)
#include <string>
#pragma warning (disable:4996)
#ifndef DEBUG
#define DEBUG 1
#endif
FILE* pFile = fopen("mylog.txt", "a");

#define debug_printf(fmt, ...) \
do { if (DEBUG) { \
fprintf(pFile, fmt, __VA_ARGS__); \
fclose(pFile); } } while (0)

#include <math.h>
# define NDEBUG///////////ino baraye in zadam ke code khorooji bede va assert kar nakone.
#include <assert.h> 
#include <cassert>

using namespace std;

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int* producingTheFactorialFractions()
{
	long long int* b = new long long int[10];/////bayad new mikard agar mikhad hamino return kone.(in local hast.)

	for (long long int i = 9; i >= 0; i--)////i=10 bood ke az size array bishtar bood
	{
		b[i] = (long long int)pow(factorial(10), 2.0) / (long long int)(i + 1);////int -> long long chon ke pow(factorial(10), 2.0) bozorgtar az mahdoode int mishe.
	}
	return b;
}

void checkZeros(long long* a)
{
	for (int i = 9; i >= 0; i--)
	{
		//if (a[i] == 0)// = ezafe kardam dakhele if ///in do khat ro bejashoon assert gozashtam
 //cout << "Zero Found" << endl;///

		assert(a[i] == 0);/////assertion


	}
}

int main(int argc, char** argv)
{

	long long int* a;
	a = producingTheFactorialFractions();
	checkZeros(a);
	//debug_printf(" %d\n", (int)pow(factorial(10), 2.0));///ina baraye emtehane dorost kar kardane har ghesmat az code hast.(dakhele file neveshte mishe.)
	debug_printf(" %lld\n", (long long int)pow(factorial(10), 2.0));
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	delete[] a;///[] mikhast.

}
