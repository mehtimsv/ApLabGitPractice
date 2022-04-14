#include <iostream>
using namespace std;
#define MAX_SIZE 200
int arr[MAX_SIZE];

typedef struct alfa *alfaptr;

struct alfa
{
	int x;
	alfaptr next;
};

alfaptr rear = NULL, front = NULL;

void push(int x)
{
	alfaptr node;
	node = new alfa;
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
	if (!front)
		cout << "ERROR 1" << endl;
	else
	{
		if (front == rear)
		{
			delete front;
			front = NULL;
			rear = NULL;
		}
		else
		{
			alfaptr node;
			node = front->next;
			delete front;
			front = node;
		}
	}
}

void search(int x)
{
	alfaptr node = front;
	int s_counter = 0;
	while (node)
	{
		if (node->x == x)
		{
			cout << s_counter << endl;
			return;
		}
		else
		{
			s_counter++;
			node = node->next;
		}
	}
	cout << "ERROR 2" << endl;
}

void rpop()
{ // pop last element
	if (rear == front)
	{
		delete front;
		front = NULL;
		rear = NULL;
	}
	else
	{
		alfaptr node = front;
		while (node->next->next)
		{
			node = node->next;
		}
		delete rear;
		rear = node;
		rear->next = NULL;
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
	int counter = 0;
	while (node)
	{
		counter++;
		node = node->next;
	}
	node = node->next;
	return counter;
}

void show()
{
	if (!front)
	{
		for (int i = 0; i < MAX_SIZE; i++)
			cout << arr[i] << endl;
	}
	else
	{
		cout << "ERROR3" << endl;
	}
}

int average()
{

	alfaptr node = front;
	int sum = 0, count = 0;
	while (node)
	{
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
		cin >> cmd;
		switch (cmd)
		{
		case 1: // push
			cin >> x;
			push(x);
			break;
		case 2: // pop
			pop();
			break;
		case 3: // rpop
			rpop();
			break;
		case 4: // search
			cin >> x;
			search(x);
			break;
		case 5: // set
			set();
			break;
		case 6: // show
			show();
			break;
		case 7: // size
			cout << size() << endl;
			break;
		case 10:
			exit(0);
		}
	}
}