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
	//pointer node jadid ra null migozarim va bad meghdar dehi mikonim.
	node->next = NULL;
	if (!front)
	{
		front = node;
		rear = node;//vaghti avalin node ra darim ezafe mikonim ham front va ham rear ra barabar node migozarim zira kolan yek node darim.
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
	int flag = 0;//baraye barresi inke aya meghdar morede nazar dar list hast ya na az flag estefade mikonam.
	while (node)//tamami dastoorat bayad dar {} gharar begirad va node harbar be khane badi eshare konad.
	{
		if (node->x == x)//dastoorati ke bayad dar soorat dorost boodan if egra shavad ra daroon {}  gharar midahim.
		{
			printf("%d", counter);
			flag = 1;//baraye barresi inke aya meghdar morede nazar dar list hast ya na az flag estefade mikonam.
			break;//agar maeghdar dataye node ba meghdar morede nazar barabar bood break konad ke kol list peymayesh nashavad
		}
		/*else {
			printf("ERROR2");
			break;
		}*///agar meghdar morede nazar dar list nabood biroone while barresi mishavad na dar in ghesmat zira dar in soorat harbar ke shart bargharar nabashad :
		//ERROR2 chap mikonad vali bayad dar halati ke kolan dar list nabood error2 chap konad
		node = node->next;
		counter++;// bayad meghdar counter ra dar har marhale afzayesh dahim
	}
	if (flag == 0)
		printf("ERROR2");//FLAG RA BIROONE WHILE BARRESI  MIKONIM KE agar meghdar morede nazar dar list nabood ERROR
		//ra chap konad.
}

void rpop() {//pop last element
	alfaptr node = front;
	if (!front)//agar list khali bood nemitavanad chizi ra hazf konad dar natije bayad return konad.
		return;
	if (!front->next)// dar soorati ke yek node dashte bashim va function rpop ra seda bezanim rear va front ra null karde va size ra 0 bargardanad.
	{
		rear = NULL;
		front = NULL;
		return;
	}
	while (node->next && node->next->next)//baraye inke ta khane yeki mande be akhar baravad bayad shart while be in soorat bashad.
		node = node->next;
	free(rear);
	rear = node;
	rear->next = NULL;//pointer khone akhare list ra bayad NULL gharar dahim va rear ra barabar khane akhar gharar dahim.
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE, node; i++, node = node->next)//baraye barresi do shart dar for az , bejaye && estefade mishavad.
		arr[i] = node->x;
}

int size()
{
	alfaptr node = front;
	int count = 0;//motaghayere count meghdar avalie nadarad ke har bar daroon while ++ shavad.
	while (node)//baraye ejraye hameye dastoorat daroone while az {} estefade mishavad.
	{
		count++; node = node->next;
	}

	return count;
}

void show()
{
	//baraye inke dar for be andazeye  toole list jello beravim bayad pointeri be aval list dashte bashim va harbar yek khane jeloo beravim
	alfaptr node = front;
	if (front) {//!front ghalat ast bayad dar soorat vojode front ta entehaye list beravim vagarna node nadarim yani list khali ast va chizi baraye namayesh
	//vojood nadarad.
		set();//baraye inke harbar niaz nabashad baraye save meghdar sahih data haye node ha tabe set ra seda bezanim.
		for (int i = 0; i < MAX_SIZE, node; i++, node = node->next)
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
	int sum = 0, count = 0;//motagheyere count meghdar dehi avalie nashode bayad =0 bashad va harbar ++ shavad.
	if (!front)
		return 0;//dar soorat khali boodan list average 0 ast.
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	return (int)sum / count;//baraye inke meghdari ke mohasebe mishavad momken ast int nabashad be int cast mikonam.
}

int main()//void bood bayad int bashad.. tabe main int ast.
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
		case 8: //for testing average.
			printf("%d", average());
			break;
		case 10:
			exit(0);
		}
	}
}
