#ifndef QUEUE_H
#define QUEUE

typedef char QueueEntry;

#define IMPLEMENTATION

#ifdef IMPLEMENTATION // Array - based queue

    #define MAXQUEUE 10

    typedef struct queue{
        int front;
        int rear;
        int size;
        QueueEntry entry[MAXQUEUE];
    }Queue;

#else //Linked-based queue

    typedef struct queuenode{
        QueueEntry Data;
        struct queuenode *next;
    }QueueNode;

    typedef struct queue{
        QueueNode *front;
        QueueNode *rear;
        int size;
    }Queue;

#endif // IMPLEMENTATION

void InitializeQueue(Queue *pq);
int Enqueue(QueueEntry e, Queue *pq);
void Dequeue(QueueEntry *pe, Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq, void (*pf) (QueueEntry));

#endif // QUEUE_H
