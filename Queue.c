#include "Queue.h"

void enqueue(Queue* q, Node* n);
Node* dequeue(Queue* q);
Queue* initQueue();


Queue* initQueue()
{
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->head = NULL;
    q->tail = NULL;
    q->size = 0;
    q->p = 0;
    
    return q;
}

void enqueue(Queue* q, Node* n)
{
    if(q == NULL || n == NULL) return;
    
    if (q->tail == NULL && q->head == NULL)
    {
        q->tail = n;
        q->head = n;
    }
    else
    {
        q->tail->next = n;
        n->prev = q->tail;
        q->tail = q->tail->next;
    }
    
    q->size++;
    
}

Node* dequeue(Queue* q)
{
    if (q == NULL || q->head == NULL) return;
    Node* tmpn = q->head;
    if (q->head->next == NULL)
    {
        q->head = NULL;
        q->tail = NULL;
    }
    else
    {
        q->head = q->head->next;
        q->head->prev = NULL;        
    }

    q->size--;
    return tmpn;
}