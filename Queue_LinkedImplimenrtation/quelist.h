#include "linked.h"
#include <stdio.h>
typedef int QueueType;
typedef struct {
    Linkedlist list;
}Queue;
void CreateQueue(Queue * q);
int FullQueue(Queue * q);
int EmptyQueue(Queue * q);
void TopQueue(Queue * q , QueueType * e);
void RearQueue(Queue * q , QueueType * e);
void LastElementQueue(Queue * q , QueueType * e);
int SizeQueue(Queue * q);
void Enqueue(Queue * q , QueueType e);
void dequeue(Queue * q , QueueType * e);
void DestroyQueue(Queue *q);
void TraverseQueue(Queue * q , void (*pf)(QueueType));
