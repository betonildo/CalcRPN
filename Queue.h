/* 
 * File:   Queue.h
 * Author: i9c
 *
 * Created on 31 de Outubro de 2014, 02:07
 */

#ifndef QUEUE_H
#define	QUEUE_H

#include "Node.h"

#ifdef	__cplusplus
extern "C" {
#endif

    typedef struct Queue Queue;
    typedef char* string;
    
    struct Queue{
        Node* tail;
        Node* head;
        int size;
        int p;
    };
    
    extern void enqueue(Queue* q, Node* n);
    extern Node* dequeue(Queue* q);
    //extern

#ifdef	__cplusplus
}
#endif

#endif	/* QUEUE_H */

