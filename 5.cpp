#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr1 = arr;
    int* ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1));
    printf("%c", (char)(*ptr2 - *ptr1));
    return 0;
}
// in yek comment chert baraye commit ast; in barname 60 - 10 ra hesab karde va be dalile inke 50 code asci 2 ast, 2 ra niz print mikonad