#include<stdio.h>//last with cmd
int main()//Moshkeli nadare code.
{
	int a;
	char *x;
	x = (char *)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	return 0;
}
