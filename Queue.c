#include "Queue.h"

void enqueue(Queue* q, Node* n);
Node* dequeue(Queue* q);


void enqueue(Queue* q, Node* n)
{
    if(q == NULL || q->tail == NULL || n == NULL) return;
    q->tail->next = n;
    n->prev = q->tail;
    
}

Node* dequeue(Queue* q)
{
    if (q == NULL || q->head == NULL) return;
    Node* tmpn = q->head;
    tmpn->next = NULL;
    tmpn->prev = NULL;
    q->head = q->head->next;
    q->head->prev = NULL;
    return tmpn;
}