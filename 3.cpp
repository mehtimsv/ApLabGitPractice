#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#define MAX_SIZE 200
using namespace std;
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
        front->next = NULL;//we must decide what will happen for front->next
        rear = front;// there is just one data at list so front is rear
    }
	else {
	    rear->next = node;
	    node->next = NULL;//we have to add this line
	    rear = node;

	}
}
void pop()
{
	alfaptr node = front;
	if (!front)
		printf("ERROR1");
	else
	{
		node = front->next;
		front = node;
	}
}

//Sorry, I did not understand what this function was supposed to do, so I turned it into a regular search function.
void search(int x)
{
	alfaptr node = front;
	int counter = 0;
	int co = 0;
	while(node)
    {
        if (node->x == x)
        {
            co = 1;
            printf("%d\t", counter);
        }
        counter++;
        node = node->next;
    }
    if(co == 0) {
        printf("ERROR2");

    }

}

void rpop() {//pop last element
    //I made many changes to this function
	alfaptr node = front;
	if(!front)
    {
       printf("ERROR4");
       return;
    }
    if(!front->next)//when there is just one element in the list
    {
        pop();
        return;
    }
	while (node->next->next)
	{
        node = node->next;

	}
	free(rear);
	node->next = NULL;
	rear = node;
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

void set()
{
	alfaptr node = front;
	int i ;
	for ( i = 0; i < MAX_SIZE && node; i++, node = node->next)
    {
        arr[i] = node->x;
    }
	arr[i] = 0;//this one is for when i use rpop function
}



void show()
{
	if (front) {
		for (int i = 0; i < MAX_SIZE; i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("ERROR3");
	}
}

double average()//average must return double not int
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
			printf("%d", size());
			break;
                case 8://average
                        printf("%f", average());//i add this new case;
                        break;
		case 10:
			exit(0);
		}
	}
}
