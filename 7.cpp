#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	// ++* p meghda *p ra ye dane ziad mikone
	++* p;
	//printf("%d", *p) tebgh bala age *p ra print konim 1 yedone ziad shode va addad 2 baraye me print mishe
	// p+= 2 be baes mishe p 2 ta khone dar array jelo bere va adda 3 ke to khoney sevome ro print begire
	p += 2;
	printf("%d", *p);
	return 0;
}