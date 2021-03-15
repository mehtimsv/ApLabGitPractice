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
	if (!front){
		front = node;
		front->next = nullptr;
		rear = node;
		rear->next = nullptr;
	}
	else {
		rear->next = node;
		rear = node;
		rear->next = nullptr;
	}
}

void pop()
{
	alfaptr node;
	if (front == nullptr)
		assert(front == nullptr);
	else
	{
		node = front->next;
		front = node;
	}
}
void search(int x)
{
	alfaptr node = front;
	int counter = 1;
	while (node!=nullptr){
		if (node->x == x)
			printf("%d", counter);
		counter++;
		node = node->next;
	}
}

void rpop() {//pop last element
	alfaptr node = front;
	if(node == nullptr)
		return;
	if(node->next == nullptr){
		delete node->next;
		node->next = nullptr;
		rear=node;
		return;
	}
	while (node->next->next != nullptr) {
		node = node->next;
	}
	delete node->next;
	node->next = nullptr;
	rear=node;
}

int size()
{
	alfaptr node = front;
	int count=0;
	while (node){
		count++;
		node = node->next;
	}
	return count;
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < size(); i++, node = node->next)
		arr[i] = node->x;
}

void show()
{
	if (front!=nullptr) {
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
	int sum = 0, count=0;
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
