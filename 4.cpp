#include<stdio.h>//last with cmd
int main()
{
	float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
	float* ptr1 = &arr[0];
	float* ptr2 = ptr1 + 3;
	float b = *ptr2 - *ptr1;/////inja float kardam ta overflow nashe.
	printf("%f", *ptr2 - *ptr1);
	return 0;
}
