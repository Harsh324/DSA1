#include "Stack.h"
#include<stdlib.h>

int * Stackarray = NULL;
int top_of_stack = -1;



void create()
{
    destroy();
    Stackarray = (int*)malloc(sizeof(int)*MAX_STACK_SIZE);
    top_of_stack = -1;
}


void destroy()
{
    if(Stackarray != NULL)
        free(Stackarray);
    return;
}



bool push(int Val)
{
    if(check_if_full == FALSE)
    {
        Stackarray[++top_of_stack] = Val;
        return TRUE;
    }
    return FALSE;
}



bool pop(int* Ptr)
{
    if(check_if_empty == FALSE)
    {
        *Ptr = Stackarray[top_of_stack--];
        return TRUE;
    }
    return FALSE;
}



bool peek(int* Ptr)
{
    if(check_if_empty == FALSE)
    {
        *Ptr = Stackarray[top_of_stack];
        return TRUE;
    }
    return FALSE;
}



int Len()
{
    return top_of_stack+1;
}


bool check_if_full()
{
    if(MAX_STACK_SIZE  == top_of_stack+1)
        return TRUE;
    return FALSE;
}


bool check_if_empty()
{
    if(-1 == top_of_stack)
        return TRUE;
    return FALSE;
}
