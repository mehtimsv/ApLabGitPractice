#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1));            //60-10
    printf("%c", (char)(*ptr2 - *ptr1));        //عدد اسکی 50
    return 0;
}
//50
//2
