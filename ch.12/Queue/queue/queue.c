#include "queue.h"
#include <stdlib.h>

#define IMPLEMENTATION

#ifdef IMPLEMENTATION // Array - based queue

void InitializeQueue(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1 ;
    pq->size = 0 ;
}

void Enqueue(QueueEntry e, Queue *pq)
{
    Queue->rear = (Queue->rear + 1) % MAXQUEUE ;
    pq->entry[Queue->rear] = e;
    Queue->size++;
}

void Dequeue(QueueEntry *pe, Queue *pq)
{
    *pe = pq->entry[Queue->front];
    Queue->front= (Queue->front + 1) % MAXQUEUE ;
    Queue->size--;
}

int QueueEmpty(Queue *pq)
{
    return !pq->size;
}

int QueueFull(Queue *pq)
{
    return (pq->size == MAXQUEUE);
}

int QueueSize(Queue *pq)
{
    return pq->size ;
}

void ClearQueue(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1 ;
    pq->size = 0 ;
}

void TraverseQueue(Queue *pq, void (*pf) (QueueEntry))
{
    for(int s = 0 , pos = pq->front ; s < pq->size ; s++)
    {
        (*pf)(pq->entry[pos]);
        pos = (pos + 1) % MAXQUEUE;
    }
}

#else //Linked-based queue

void InitializeQueue(Queue *pq)
{
    pq->front = NULL;
    pq->rear = NULL;
    pq->size = 0 ;
}

int Enqueue(QueueEntry e, Queue *pq)
{
    QueueNode *node = (QueueNode*)malloc(sizeof(QueueNode));
    if ( node == NULL)
    {
        return 0;
    }
    else
    {
        node->Data = e;
        node->next = NULL;
        if(!pq->rear)
        {
            pq->front = node;
        }
        else
        {
            pq->rear->next = node;
        }
        pq->rear = node;
        pq->size++;
    }
}

void Dequeue(QueueEntry *pe, Queue *pq)
{
    *pe = pq->front->Data;
    QueueNode *tmp = pq->front;
    pq->front = tmp->next;
    free(tmp);
    if(!pq->front)
        pq->rear = NULL;
    pq->size--;
}

int QueueEmpty(Queue *pq)
{
    return !pq->front; // if front equals to null
}

int QueueFull(Queue *pq)
{
    return 0;
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue(Queue *pq)
{
    while(pq->front)
    {
        pq->rear= pq->front->next;
        free(pq->front);
        pq->front = pq->rear;
    }
    pq->size = 0 ;
}

void TraverseQueue(Queue *pq, void (*pf) (QueueEntry))
{
    for(QueueNode *tmp = pq->front ; tmp ; tmp->next)
    {
        (*pf)(tmp->Data);
    }
}

#endif // IMPLEMENTATION

