#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1));
    printf("%c", (char)(*ptr2 - *ptr1));
    // result of the run: line 7 = 50  ,  line 8 = 2 (ascii code for number 2 is 50)
    return 0;
}