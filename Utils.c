#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* getString();


char* getString()
{
    char ch;
    int allocStep = 50;
    int size = 1;
    char* stringer = (char* )malloc(sizeof(char) * allocStep);
    while( (ch = fgetc(stdin)) != '\n')
    {
        if ( size > allocStep)
        {
            allocStep += 25;
            stringer = (char* )realloc(stringer, sizeof(char) * (allocStep + 1) );
        }
        
        stringer[size - 1] = ch;
        
        size++;
    }
    
    stringer[size - 1] = '\0';
    
    return stringer;    
}
