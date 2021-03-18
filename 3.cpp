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
	//////////////////////
	if (!front) {
		node->next = NULL;///NULL nakarde bud.
		front = rear = node;///rear ra niz barabar ba node migozarim.
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
	int found = 0;///flag tarif mikonim.

	///////////////

	while (node)
	{
		if (node->x == x) {
			printf("%d", counter);
			found = 1;///flag ro 1 mizarim ke bedunim peyda shode.
			break;
		}
		node = node->next;
		counter++;///
	}
	////in shart ro baraye peyda nashodanesh mizarim.
	if (found == 0)
	{
		printf("ERROR1");
	}
}

void rpop() {//pop last element
	alfaptr node = front;
	if (!front) {///agar front NULL bud
		return;
	}
	if (!front->next) {
		rear = NULL;
		front == NULL;
		return;
	}
	while (node->next && node->next->next)////bejaye node, inaro mizarim
		node = node->next;
	free(rear);
	rear = node;
	rear->next = NULL;////
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
	int count = 0;///meghdardeho avaliye mikonim
	while (node)
		count++;node = node->next;
	return count;
}

void show()
{
	alfa* node = front;///node az jense alfa taarif mikonim
	if (front) {////taajobe if bardashtam
		for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)///sharte halghe avaz shod.
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
	int sum = 0, count = 0;///meghdardehi avaliye
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	/// //.////////
	return (int)sum / count;///inja niaz be cast bud.
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