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
    if (!front) {
        //next ro bayad NULL konim
        node->next = NULL;
        //rear ro ham bayad mosavie node bezarim.
        front = rear = node;
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
    int found = 0; // ag 0 bud yani peida nakrde ag 1 shod yani peida krde
    while (node) {//dasturaye tuye while baya tu {} gharar begirn ta hamashun sharte whilo dashte bashan.
        if (node->x == x) {//dasturaye tuye if ham bayad tu {} gharar begirn ta hamashun sharte ifo dashte bashn.
            printf("%d", counter);
            //chon peida krde un meghdaro , found ro 1 mikonim.
            found = 1;
            //break mizarim k ag x ro peida krd dg baghie listo jelo nare.
            break;
        }
        /*else {
            printf("ERROR2");
            break;
        }*/
        node = node->next;
        //meghdare countero bayad harbar ziad konim.
        counter++;
    }
    //hala bayad bebeinim k ag found mosavie 0 bud yani meghdary k mikhaimo peida nkrde bud error bede.
    if(found == 0){
        printf("ERROR2");
    }
}

void rpop() {//pop last element
    alfaptr node = front;
    //ag list khali bud 
    if(!front)
    {
        printf("ERROR");
        exit(0);
    }
    //ag node haye bady NULL budan valy khode front NULL nabud.
    if(front->next == NULL)
    {
        free(front);
        front = NULL;
        printf("There is not any node...");
        exit(0);
    }
   //yeki munde be akharin node ro peida konim
    while (node->next && node->next->next != NULL)
        node = node->next;

    //akharin node ro rear bezarim
    rear = node->next;
    //akharin node ya hamun rear ro pak konim
    free(rear);
    //akharin node ro NULL konim.
    node->next = NULL;
}

void set()
{
    alfaptr node = front;
    for (int i = 0; i < MAX_SIZE , node; i++, node = node->next)
        arr[i] = node->x;
}

int size()
{
    alfaptr node = front;
    // be count bayad meghdare avalie bedim.
    int count = 0;
    while (node) {
        count++;
        node = node->next;
    }
    return count;
}

void show()
{
    //node ro chon mikhaym to for estefade konim tarif mikonim va barabare front mizarim.
    alfaptr node = front;
    //agar front NULL nabashe bayadchap kne listo.
    if (front) {
        //bara inke ta hamun node k vojud dare jelo bere bayad shartaye for ro yekm taghir bedim.
        for (int i = 0; i < MAX_SIZE ,node; i++ , node = node->next){
            printf("%d ", arr[i]);
        }

    }
    else
    {
        printf("ERROR3");
    }
}

int average()
{
    if(!front) {
        printf("Error");
        exit(0);
    }

    alfaptr node = front;
    //be count bayad meghdare avalie bedim.
    int sum = 0, count = 0;
    while (node) {
        sum += node->x;
        count++;
        node = node->next;
    }
    //bayad cast konim k khoruji hatman int bashe.
    return (int)sum / count;
}

int main()
{
    int cmd;
    long long int x;
    while (1)
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
                printf("%d" ,average());
                break;
            case 10:
                exit(0);
        }
    }
}

                                        


