#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];

typedef struct alfa* alfaptr;

struct alfa {
	long long int x;
	alfaptr next;
};
alfaptr rear = NULL, front = NULL;
void push(long long int x)
{
	alfaptr node;
	node = (alfaptr)malloc(sizeof(struct alfa));
	node->x = x;
	if (!front)
	{
		front = node;
		front->next=NULL;
		rear = node;
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
		printf("ERROR1!\n");
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
	int flag = 0;
	while (node!=NULL)
	{
		if (node->x == x)
		{
			printf("%d", counter);
			flag = 1;
			break;
		}
		node = node->next;
	}
	if (flag == 0)
		printf("ERROR2\n");
}

void rpop() {//pop last element
	alfaptr node = front;
	while (node->next->next!=NULL)
		node = node->next;
	alfaptr temp = node->next;
	node->next = NULL;
	free(temp);
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
	if (!front) {
		for (int i = 0; i < MAX_SIZE; i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("ERROR3\n");
	}
}

float average()
{
	alfaptr node = front;
	int sum = 0, count = 0;
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	return (float)sum / count;
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
			printf("%d", size());
			break;
		case 10:
			exit(0);
		}
	}
}