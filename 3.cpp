#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];

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
		front->next = NULL;
	}
	
	else {
		rear = node;
		rear->next = NULL;
		if (front->next == NULL)
			front->next = rear;
		else {
			alfaptr temp = front;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = rear;
		}
	}
}

void pop()
{
	alfaptr node;
	if (!front)
		printf("%s", "ERROR1");
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
	while (node)
	{
		if (node->x == x)
		{
			printf("%d", counter);
			break;
		}
		else {
			printf("%s", "ERROR2");
		}
		node = node->next;
	}
}

void rpop() {//pop last element
	alfaptr node = front;
	while (node->next->next != NULL)
		node = node->next;
	free(rear);
	rear = node;
	rear->next = NULL;
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE; i++)
		arr[i] = node->x;
	node = front;
	
	for (int i = 0; i < MAX_SIZE && node; i++)
	{
		arr[i] = node->x;
		node = node->next;
	}
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
	if (front) {
		for (int i = 0; i < MAX_SIZE; i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("%s", "ERROR3");
	}
	printf("\n");
}

int average()
{

	alfaptr node = front;
	int sum = 0, count = 0;
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
		case 10:
			exit(0);
		}
	}
	return 0;
}