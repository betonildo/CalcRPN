/* 
 * File:   Stack.h
 * Author: i9c
 *
 * Created on 30 de Outubro de 2014, 22:49
 */

#ifndef STACK_H
#define	STACK_H

#include <stdio.h>
#include "Node.h"

#ifdef	__cplusplus
extern "C" {
#endif
    
    typedef struct Stack{
        int p, size;
        Node* n;
    }Stack;
    
    extern void pop(Stack* stk);
    extern void push(Stack* stk, Node* n);
    extern Node* top(Stack* stk);
    extern int empty(Stack* stk);
    extern void makeNull(Queue* stk);
    extern Stack* initStack(int size);


#ifdef	__cplusplus
}
#endif

#endif	/* STACK_H */

