#include "quelist.h"
#include "linked.h"
#include <stdlib.h>
void CreateQueue(Queue * q)
{
    CreateList(&q->list);
}
int FullQueue(Queue * q)
{
    return 0;
}
int EmptyQueue(Queue * q)
{
    return IsEmptyList(&q->list);
}
void TopQueue(Queue * q , QueueType * e)
{
    *e=Getindex(&q->list , 0);
}
void RearQueue(Queue * q , QueueType * e)
{
    *e=Getindex(&q->list ,ListSize(&q->list)-1);
}
void LastElementQueue(Queue * q , QueueType * e)
{
    *e=Getindex(&q->list ,ListSize(&q->list)-1);
}
int SizeQueue(Queue * q)
{
    return ListSize(&q->list);
}
void Enqueue(Queue * q , QueueType e)
{
    Insert(&q->list  , e ,ListSize(&q->list));
}
void dequeue(Queue * q , QueueType * e)
{
    Retrieve(&q->list , e ,0);
}
void DestroyQueue(Queue *q)
{
    ClearList(&q->list);
}
void TraverseQueue(Queue * q , void (*pf)(QueueType ))
{
    TraverseList(&q->list , pf);
}
