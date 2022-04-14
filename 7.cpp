#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	++*p;
	p += 2;
	cout<<*p<<endl;
	return 0;
}