#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float *ptr1 = &arr[0];
    printf("%f\n",*ptr1);//ezafe shode
    float *ptr2 = ptr1 + 3;
    printf("%f\n",*ptr2);//ezafe shode
    printf("%f", *ptr2 - *ptr1);
    return 0;
}

//Moshkeli nadare
