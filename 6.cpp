#include<stdio.h>
int main()
{
	int a;
	char *x;
	x = (char *)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	return 0;
}
/* 
In first, x[0] = 0 0 0 0 0 0 0 0 = 0 and x[1] = 0 0 0 0 0 0 1 0 = 512 and a = 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0.
When we assgin 1 to x[0] <a> becomes 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 1 that is equal to 513.
*/ 
