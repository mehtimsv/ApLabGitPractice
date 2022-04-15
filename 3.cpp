#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];

typedef struct alfa *alfaptr;

struct alfa
{
	long long int x;
	alfaptr next;
};
alfaptr rear = NULL, front = NULL;
void push(long long int x)
{
	alfaptr node;
	node = (alfaptr)malloc(sizeof(struct alfa));
	node->x = x;
	node->next = NULL;
	if (!front)
	{
		front = node;
		rear = node;
	}
	else
	{
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
		free(front);
		front = node;
	}
}
void search(long long int x)
{
	alfaptr node = front;
	int counter = 0;
	while (node)
	{
		if (node->x == x)
		{
			printf("%d\n", counter);
			break;
		}
		else if (node->next == NULL)
		{
			printf("ERROR2");
			break;
		}
		counter++;
		node = node->next;
	}
}

void rpop()
{ // pop last element
	alfaptr node = front;
	while (node->next->next)
		node = node->next;
	free(rear);
	rear = node;
	// printf("%d",rear->x);
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)
		arr[i] = node->x;
}

int size()
{
	alfaptr node = front;
	int count = 0;
	while (node)
	{
		node = node->next;
		count++;
	}
	return count;
}

void show()
{
	if (front)
	{
		for (int i = 0; i < size(); i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("ERROR3");
	}
}

int average()
{

	alfaptr node = front;
	long long int sum = 0, count = 0;
	while (node)
	{
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
}
void menu()
{
	printf("\nEnter the number of your choise (1 : push) (2 : pop) (3 : rpop) (4 : search) (5 : set) (6 : show) (7 : size) (8 : exit) \n");
}
int main()
{
	int cmd;
	long long int x;
	while (true)
	{
		menu();
		scanf("%d", &cmd);
		switch (cmd)
		{
		case 1: // push
			scanf("%d", &x);
			push(x);
			break;
		case 2: // pop
			pop();
			break;
		case 3: // rpop
			rpop();
			break;
		case 4: // search
			scanf("%d", &x);
			search(x);
			break;
		case 5: // set
			set();
			break;
		case 6: // show
			show();
			break;
		case 7: // size
			printf("%d", size());
			break;
		default:
			exit(0);
		}
	}
}