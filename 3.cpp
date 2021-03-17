#include<stdio.h>
#include<stdlib.h>
#ifndef DEBUG
#define DEBUG 1
#endif
FILE* pFile = fopen("myloog.txt", "a");

#define debug_printf(fmt, ...) \
do { if (DEBUG) { \
fprintf(pFile, fmt, __VA_ARGS__); \
fclose(pFile); } } while (0)

#define MAX_SIZE 200
int arr[MAX_SIZE];
# define NDEBUG///////////ino baraye in zadam ke code khorooji bede va assert kar nakone.
#include <assert.h> 
#include <cassert>
typedef struct alfa * alfaptr;

struct alfa {
	long long x;
	alfaptr next;
};
alfaptr rear = NULL, front = NULL;
void push(int x)
{

	alfaptr node;
	node = (alfaptr)malloc(sizeof(struct alfa));
	node->x = x;
	if (!front)
	{
		front = node;
		rear = front;/// rear ro ham barabar front mizarim
	}
	else {
		rear->next = node;
		rear = node;
	}
	
	node->next = NULL;///next node jadid ro barabar NULL gharar midim.
}

void pop()
{//avali hazf 
	alfaptr node;
	if(!front)
assert(!front);///assertion
		//printf("ERROR1");
	else
	{
		node = front->next;
		free(front);////front bayad free she.
		front = node;
	}
}
void search(int x)
{
	alfaptr node = front;
	int counter = 0;
	while (node!=NULL)
	{///while [] nadasht.
			
		if (node->x == x){
		counter ++;//counter ro bayad ziad konim.ta halghe edame peyda kone.be else ham niazi nist.
	
				}
				node = node->next;
	
	}
	
	printf("%d", counter);////counter ro print mikonim.
}

void rpop() {//pop last element
	if(!front)//bayad check beshe ke NULL nabashe
		return;
		
	if(front->next == NULL) ///age faghat ye khoone dashte bashim.
    front = NULL;
    else
 {
      
      alfaptr node  = front;
      while(node->next->next != NULL)//nabayad ta akhar berim.
        node = node->next;
      alfa* lastNode = node->next;
      node->next = NULL;
      rear=lastNode ;
     free (lastNode); 
    }
}

void set()
{
	if(!front)//bayad check konim.
		return;
		
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)
	
		arr[i] = node->x;
	
}

int size()
{
	alfaptr node = front;
	int count = 0;//count meghdare avalie mikhad.
	while (node)
	{///{} bayad bezarim.
		count++;
		node = node->next;
	}
	return count;
}

void show()
{
	if (!front) {
		for (int i = 0; i < MAX_SIZE; i++)
			printf("%d ", arr[i]);
	}
	else
	{//ina bejaye error bayad gharar begiran.(agar set nashode bashe.)
		alfaptr node = front;
		while(node)
		{
			printf("%lld ", node->x);
			node = node->next;
		}
	}
}

int average()
{
	if(!front)////agar front NULL bood bayad 0 bargardoonim.
		return 0;

	alfaptr node = front;
	int sum = 0, count = 0;///count bayad aval =0 bashe.
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
}

int main()///bejaye void int mikhaim.
{
	int cmd;
	long long int x;
	push(4);
	push(2);
	push(3);
	while (true)
	{
		scanf("%d", &cmd);
		switch (cmd)
		{
		case 1://push
			scanf("%lld", &x);
			push(x);
			break;
		case 2://pop
			pop();
			break;
		case 3://rpop
			rpop();///ghalate
			show();
			break;
		case 4://search
			scanf("%lld", &x);
			search(x);
			break;
		case 5://set
			set();
			break;
		case 6://show
	
          debug_printf("%d",average());//baraye test.
			show();
			break;
		case 7://size
			printf("%d", size());
			break;
		case 10:
			exit(0);
		}
	}	
return 0;///ino bayad ezafe konim.
}
