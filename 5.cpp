﻿#include<stdio.h>
#include<assert.h>
int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60 };
	int* ptr1 = arr;
	int* ptr2 = arr + 5;
	assert(*ptr2 - *ptr1 == 50);
	printf("%d\n", (*ptr2 - *ptr1));
	assert((char)(*ptr2 - *ptr1) == '2');
	printf("%c", (char)(*ptr2 - *ptr1));
	return 0;
}