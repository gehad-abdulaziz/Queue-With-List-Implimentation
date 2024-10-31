#include <stdio.h>
#include "quelist.h"
#include "linked.h"

void print(QueueType  element)
{
    printf("%d " , element);
}
int main()
{
    Queue q , neww;
    CreateQueue(&q);
    CreateQueue(&neww);
    if(EmptyQueue(&q))
        printf("empty \n");
    for(int i =0 ; i < 7 ; i++)
        Enqueue(&q , i+1);
    if(!EmptyQueue(&q))
        printf("not empty \n");
            TraverseQueue(&q , &print);

    printf("\n\n");
    TraverseQueue(&q , &print);
    for(int i =0 ; i < 20 ; i++)
        Enqueue(&q , i+1);
    TraverseQueue(&q , &print);
    int last , first ;
    LastElementQueue(&q , &last);
    printf("\n%d\n" , last);
    RearQueue(&q , &last);
    printf("\n%d\n" , last);
    TopQueue(&q , &first);
    printf("\n%d\n" , first);
    DestroyQueue(&q);
    if(EmptyQueue(&q))
        printf("empty \n");

}
