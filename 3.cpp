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
int size()
{
	alfaptr node = front;
	int count = 0;
	while (node) {
		count++;
		node = node->next;
	}
	return count;
}
void set()
{
	alfaptr node = front;
	int i = 0;
	for (node = front; node != NULL; i++, node = node->next) {
		arr[i] = node->x;
	}
}
void push(int x)
{
	alfaptr node, current;
	node = (alfaptr)malloc(sizeof(struct alfa));
	node->x = x;
	node->next = NULL;
	if (!front)
		front = node;
	else {
		for (current = front; current->next != NULL; current = current->next);
		current->next = node;
	}
	//set();
}
void pop()
{
	alfaptr node;
	if (!front)
		printf("ERROR1");
	else
	{
		node = front;
		front = front->next;
		free(node);
	}
}
void search(int x)
{
	alfaptr node = front;
	int counter = 0;
	while (node != NULL) {
		if (node->x == x) {
			counter++;
			//node = node->next;
		}
		node = node->next;
	}
	if (counter != 0)
		printf("%d", counter);
	if (counter == 0)
		printf("ERROR2");
}
void rpop() {//pop last element
	alfaptr node = front, pre = front;
	while (node->next)
		node = node->next;
	while (pre->next->next)
		pre = pre->next;
	free(node);
	pre->next = NULL;
}
void show()
{
	set();
	if (front != NULL) {
		for (int i = 0; i < size(); i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("ERROR3");
	}
}
float average()
{
	alfaptr node = front;
	float sum = 0;
	int count;
	while (node) {
		sum += node->x;
		node = node->next;
	}
	return sum / size();
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
		case 8://average
			printf("%.3f", average());
			break;
		case 10:
			exit(0);
		}
	}
}