#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    printf("%f", *ptr2 - *ptr1);
    // result of the run: 90.5 - 12.5 = 78.0000
    return 0;
}