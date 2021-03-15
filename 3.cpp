#include <iostream> //we are using cpp
//#inclide<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];

#define DEBUG_MODE true

class Log
{
public:
	Log(const std::string &funcName)
	{
		if (DEBUG_MODE)
		{
			std::cout << funcName << ": ";
		}
	}

	template <class T>
	Log &operator<<(const T &v)
	{
		if (DEBUG_MODE)
		{
			std::cout << v;
		}
		return *this;
	}

	~Log()
	{
		if (DEBUG_MODE)
		{
			std::cout << "" << std::endl;
		}
	}
};
#define DEBUG Log(__FUNCTION__)

typedef struct alfa *alfaptr;

struct alfa
{
	long long x;
	alfaptr next;
};
alfaptr rear = NULL, front = NULL;
//void push(int x)

void push(long long int x) //  alfa x type is long long int
{
	DEBUG << "pushing " << x;
	alfaptr node;
	node = (alfaptr)malloc(sizeof(struct alfa));
	node->x = x;
	if (!front)
	{
		front = node;
		rear = node; // first time length is one and front and rear are same things
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
		node = front;
		front = front->next;
		free(node); //you have to clear storage
	}
}
//void search(int x)
void search(long long int x) // alfa x type is long long int
{
	//i think this function will print count of x in list
	DEBUG << "search for " << x;
	alfaptr node = front;
	int counter = 0;
	while (node) // for more than 1 commad you need to use {}
	{
		// if (node->x == x)
		// 	printf("%d", counter);
		if (node->x == x)
		{
			counter++;
		}
		// else
		// {
		// 	printf("ERROR2");
		// 	break;
		// }
		node = node->next;
	}
	if (counter == 0)
	{
		printf("ERROR2");
	}
	else
	{
		printf("%d", counter);
	}
}

void rpop()
{ //pop last element
	alfaptr node = front;
	if (front == rear) // when there is one node in list
	{
		free(front);
		front = NULL;
		rear = NULL;
	}
	else
	{
		//while (node)
		while (node->next != rear) // need to reach one node before rear
			node = node->next;
		free(rear);
		rear = node;
	}
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
	int count;
	while (node) // for more than one command you need {}
	{
		count++;
		node = node->next;
	}
	return count;
}

void show()
{
	//if (!front)
	if (front) // i think this will check for empty list
	{
		for (int i = 0; i < MAX_SIZE; i++)
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
	int sum = 0, count;
	while (node)
	{
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
}

//void main()
int main() // main function must return int to report OS errors
{
	int cmd;
	long long int x;
	while (true)
	{
		scanf("%d", &cmd);
		switch (cmd)
		{
		case 1: //push
			scanf("%lld", &x);
			push(x);
			break;
		case 2: //pop
			pop();
			break;
		case 3: //rpop
			rpop();
			break;
		case 4: //search
			scanf("%lld", &x);
			search(x);
			break;
		case 5: //set
			set();
			break;
		case 6: //show
			show();
			break;
		case 7: //size
			printf("%d", size());
			break;
		case 10:
			exit(0);
		}
	}
}