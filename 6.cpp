#include<stdio.h>
int main()
{
	int a;
	char* x;
	x = (char*)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	return 0;
}
//////////////////////////////////  OUTPUT  ///////////////////////////////////////////////////////////////
//
//   513
// 
//   E:\Users\Alireza\source\repos\Project2\Debug\Project2.exe (process 15444) exited with code 0.
//   Press any key to close this window . . .
//                                                                                                  
//////////////////////////////////////////////////////////////////////////////////////////////////////////