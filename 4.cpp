//˜Ï ÏÑÓÊ
//ÇÓÊİÇÏå ÇÒ assertion :
#include<stdio.h>
#include<assert.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float* ptr1 = &arr[0];
    assert(*ptr1 == 12.5);
    float* ptr2 = ptr1 + 3;
    assert(*ptr2 == 90.5);
    printf("%f", *ptr2 - *ptr1);
    return 0;
}

//Output:
//78.000000
