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
//////////////////////////////////  OUTPUT  ///////////////////////////////////////////////////////////////
//
//   50
//   2
//
//   E:\Users\Alireza\source\repos\Project2\Debug\Project2.exe(process 15496) exited with code 0.
//   Press any key to close this window . . .
//                                                                                                  
//////////////////////////////////////////////////////////////////////////////////////////////////////////