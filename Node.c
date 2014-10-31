#include "Node.h"

Node* initNode();
Node* getNext(Node* n);
Node* getPrev(Node* n);
void setNodeValue(Node* n, void* content);
void* getNodeValue(Node* n);

Node* initNode()
{
    Node* tmp = (Node*)malloc(sizeof(Node));
    tmp->el = NULL;
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

void setNodeValue(Node* n, void* content)
{
    n->el = content;
}

void* getNodeValue(Node* n)
{
    return n->el;
}