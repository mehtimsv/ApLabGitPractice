#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	++*p;
	p += 2;
	printf("%d", *p);
	/* result of the run: 3 because line 7 will change the part that pointer is pointing to
	the third data of the array which is 3 */
	return 0;
}