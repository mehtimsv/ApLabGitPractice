#include<stdio.h>
#include<assert.h>
int main()
{
	int a;
	char *x;
	x = (char *)&a;
	a = 512;
	x[0] = 1;
	assert(a == 513);
	printf("%d\n", a);
	return 0;
}
