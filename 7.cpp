#include<stdio.h>
#include<assert.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	assert(*p == 1);
	++ * p;
	assert(*p == 2);
	p += 2;
	assert(*p == 3);
	printf("%d", *p);
	return 0;
}// output : 3
//debugging with assertion method
