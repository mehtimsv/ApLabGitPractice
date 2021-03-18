#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
long long arr[MAX_SIZE];

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
	node->next = NULL;

	if (!front) {
		front = node;

		rear = front;
		rear->next = NULL;
	}




	else {
		//printf("sala,%lld", rear->x);
		rear->next = node;
		rear = node;

		rear->next = NULL;
		//printf("sala,%lld", rear->x);
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
	int y = 0;
	alfaptr node = front;
	int counter = 0;
	while (node) {
		if (node->x == x) {
			printf("%d", counter);
			y = 1;
		}
		node = node->next;
	}
	if (y == 0) {

		printf("eroe 2");

	}

}

void rpop() {//pop last element
	alfaptr node = front;
	while (node)
		node = node->next;
	free(rear);
	rear = node;
}

void set()
{
	int j = 0;
	long long m;

	alfaptr node = front;



	for (int i = 0; node != NULL; i++, node = node->next) {
		arr[i] = node->x;

		printf("%lld ", arr[i]);

	}

}

int size()
{
	alfaptr node = front;
	int count = 0;
	while (node) {
		count++;
		node = node->next;
		//	printf("%lld", node);
	}

	return count;
}

void show()
{
	if (front) {
		alfaptr node = front;

		for (int i = 0; node != NULL; i++) {


			printf("%lld ", arr[i]);

			node = node->next;
		}


	}
	else
	{
		printf("ERROR3");
	}
}

int average()
{

	alfaptr node = front;
	long long sum = 0;
	int  count = 0;
	while (node != NULL) {
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
		scanf_s("%d", &cmd);
		switch (cmd)
		{
		case 1://push
			scanf_s("%lld", &x);
			push(x);
			break;
		case 2://pop
			pop();
			break;
		case 3://rpop
			rpop();
			break;
		case 4://search
			scanf_s("%lld", &x);
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