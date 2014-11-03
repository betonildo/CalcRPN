/* 
 * File:   Node.h
 * Author: i9c
 *
 * Created on 31 de Outubro de 2014, 00:33
 */

#ifndef NODE_H
#define	NODE_H

#include "Definitions.h"

//#define TYPEC(t) #t#


#ifdef	__cplusplus
extern "C" {
#endif
    
    typedef struct Node Node;
    
    struct Node{
        int el;
        Node* next;
        Node* prev;
    };

    extern Node* initNode(int d);
    extern Node* getNext(Node* n);
    extern Node* getPrev(Node* n);
    extern void setNodeValue(Node* n, int content);
    extern int getNodeValue(Node* n);

#ifdef	__cplusplus
}
#endif

#endif	/* NODE_H */

