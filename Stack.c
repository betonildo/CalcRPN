#include "Stack.h"

void pop(Stack* stk);
void push(Stack* stk, Node* n);
Node* top(Stack* stk);
int empty(Stack* stk);
void makeNull(Stack* stk);
Stack* initStack(int size);




void pop(Stack* stk)
{
    //Cancel operation
    if (stk == NULL) return; 
    
    if(stk->p >= 0)
    {
        Node* tmpn = top(stk);
        stk->n = getPrev(tmpn);
        free(tmpn);
        stk->p--;
        
    }
    else
        //pilha vazia
        return;
}

/*
 * Push a value to stack stk as node n.
 */
void push(Stack* stk, Node* n)
{
    //Desviar de possíveis problemas
    if(stk == NULL || n == NULL) return;
    
    //Pilha cheia
    if (stk->p == stk->size - 1) return;
    
    if (stk->n == NULL)
    {
        stk->n = n;
    }
    else
    {
        Node* act = stk->n;
        act->next = n;
        n->prev = act;
        stk->n = n;
    }
    
    stk->p++;
    
}


Node* top(Stack* stk)
{
    if(stk == NULL) return NULL;
    return stk->n;
}

int empty(Stack* stk)
{
    return (stk->p < 0) ? 1 : 0;
}


void makeNull(Stack* stk)
{
    while(top(stk) != NULL)
    {
        pop(stk);
    }
}

Stack* initStack(int size)
{
    Stack* stk = (Stack*)malloc(sizeof(Stack));
    stk->p = -1;
    stk->n = NULL;
    stk->size = size;
    
    return stk;
}