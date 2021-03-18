#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];

typedef struct alfa* alfaptr;

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
	node->next = NULL;			//the 'next' of the last node shoud be NULL
	if (!front)
	{
		front = node;
		rear = node;			//if we have just one node, front and rear willbe equal.
	}
	else {
		rear->next = node;
		rear = node;
	}
}

void pop()
{
	alfaptr node;
	if (!front)
		printf("ERROR1");
	else
	{
		node = front->next;
		front = node;
	}
}
void search(int x)
{
	alfaptr node = front;
	int counter = 0;
	bool f = true;			// we need a bool to understand if none of the node was equal to x. and then print an error.
	while (node)
	{
		if (node->x == x)
		{
			printf("%d", counter);
			f = false;
		}
		node = node->next;
		counter++;		//counter should plus 1 in each loop
	}
	if (f)
	{
		printf("ERROR2");
	}

}

void rpop() {//pop last element
	if (front == NULL)		//if we dont have any node, we could not delete anything
		return;
	if (front->next == NULL)			//if we have just one node and then we pop it, front and rear should be NULL.
	{
		front = NULL;
		rear = NULL;
		return;
	}
	alfaptr node = front;
	while (node->next && node->next->next)		//because we need the previous node of the last node, the condition should be like this.
		node = node->next;
	free(rear);
	rear = node;
	rear->next = NULL;			//rear->next should always be NULL.
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE, node; i++, node = node->next)		//in for condition, we can use ',' instead of '&&'.
		arr[i] = node->x;
}

int size()
{
	alfaptr node = front;
	int count = 0;			//counter should be 0 at first.
	while (node)
	{				//because we have more than one thing in while, we need bracket.
		count++;
		node = node->next;
	}
	return count;
}

void show()
{
	if (front)			//(agar front NULL nabashad.) pas bayad be jaye !front, front bashad.
	{
		set();			//yek bar set mikonim ta taghirat dar tabee ham eemal shavand.
		alfaptr node = front;			//be yek pointer be avale list niaz darim ta dar tool araye ta jaei ke node vojud darad jelo beravim.
		for (int i = 0; i < MAX_SIZE, node; i++, node = node->next)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("ERROR3");
	}
}

float average()		//tabee bayad float bargardanad. chon momken ast average aashari bashad.
{
	if (front == NULL)			//agar nodi nadashte bashim, average 0 ast.
		return 0;
	alfaptr node = front;
	int sum = 0, count = 0;		//count bayad 0 bashad.
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
}

int main()
{
	int cmd;
	long long int x;
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
			rpop();
			break;
		case 4://search
			scanf("%lld", &x);
			search(x);
			break;
		case 5://set
			set();
			break;
		case 6://show
			show();
			break;
		case 7://size
			printf("%d\n", size());
			break;
		case 8:		//average
			printf("%f\n", average());
			break;
		case 10:
			exit(0);
		}
	}
}
