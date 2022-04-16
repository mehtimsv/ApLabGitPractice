#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	++* p;
	p += 2;
	printf("%d", *p);
	return 0;
}
//////////////////////////////////  OUTPUT  ///////////////////////////////////////////////////////////////
//
//   3
//
//   E:\Users\Alireza\source\repos\Project2\Debug\Project2.exe (process 1600) exited with code 0.
//   Press any key to close this window . . .
//                                                                                                  
//////////////////////////////////////////////////////////////////////////////////////////////////////////