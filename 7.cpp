#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	++*p;
	p += 2;
	printf("%d", *p);
	return 0;
}
// This program adds 1 unit to arr[0] but prints arr[2].