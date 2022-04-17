#include<stdio.h>
int main()
{
	int a;
	char* x;
	// alan char* x be adress a ehshare mikone va ba x[0] byte avalesho be 1 tabdil mikone ke baes mishe addademon avaz she

	//summary: the code is gibberish and the C language doesn't define what this program will do. 
	//It may crash, print any value or print no value at all. 
	//Pondering about why it behaves in a certain way ***isn't meaningful practice.*** Instead focus on learning how to avoid undefined behavior bugs.

	//inam ye shakhsi to stackoverflow neveshte bood
	x = (char*)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	return 0;
}
