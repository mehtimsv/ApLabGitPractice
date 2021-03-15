#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];

typedef struct alfa* alfaptr;

struct alfa {
	long long x;
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
		front = rear = node;
	else {
		rear->next = node;
		rear = node;
	}
}

void pop()
{
	alfaptr node;
	assert(front);
	node = front->next;
	free(front);
	front = node;
}

void search(long long int x)
{
	alfaptr node = front;
	int counter = 0;
	assert(node);
	while (node)
	{
		if (node->x == x)
		{
			printf("%d\n", counter);
			break;
		}
		assert(node);
		node = node->next;
		counter++;
	}
}

void rpop() {//pop last element
	alfaptr node = front;
	assert(front);
	while (node->next && node->next != rear)
		node = node->next;
	free(rear);
	rear = node;
	node->next = NULL;
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
		count++;
		node = node->next;
	}
	return count;
}

void show()
{
	assert(front);
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)
		printf("%d ", arr[i]);
	printf("\n");
}

float average()
{

	alfaptr node = front;
	int sum = 0, count = 0;
	assert(front);
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
}

void main()
{
	int cmd;
	long long int x;
	while (true)
	{
		printf("command:");
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
		case 8:
			printf("%f\n", average());
			break;
		default:
			exit(0);
		}
	}
}