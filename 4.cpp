#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float* ptr1 = &arr[0];
    float* ptr2 = ptr1 + 3;
    printf("%f", *ptr2 - *ptr1);
    return 0;
}
//////////////////////////////////  OUTPUT  ///////////////////////////////////////////////////////////////
//
//  78.000000        
//                                                                                 
//  E:\Users\Alireza\source\repos\Project2\Debug\Project2.exe (process 13664) exited with code 0.     
//  Press any key to close this window . . .                                                         
//                                                                                                  
//////////////////////////////////////////////////////////////////////////////////////////////////////////