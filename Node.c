#include "Node.h"

Node* initNode(int d);
Node* getNext(Node* n);
Node* getPrev(Node* n);
void setNodeValue(Node* n, int content);
int getNodeValue(Node* n);

Node* initNode( int d)
{
    Node* tmp = (Node*)malloc(sizeof(Node));
    tmp->el = d;
    tmp->next = NULL;
    tmp->prev = NULL;
    
    return tmp;
}


Node* getNext(Node* n)
{
    return (n != NULL) ? n->next : NULL;
}

Node* getPrev(Node* n)
{
    return (n != NULL) ? n->prev : NULL;
}

void setNodeValue(Node* n, int content)
{
    n->el = content;
}

int getNodeValue(Node* n)
{
    return n->el;
}