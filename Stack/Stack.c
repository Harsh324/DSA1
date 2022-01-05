#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>



int* Stackarray = NULL;
int top_of_stack = -1;

void create()
{
    destroy();
    Stackarray = (int*)malloc(MAX_STACK_SIZE * sizeof(int));
    top_of_stack = -1;
    return;
}

void destroy(){
    if(NULL != Stackarray)
    {
        free(Stackarray);
        Stackarray = NULL;
    }
    return;
}

bool push(int val){
    if(False == Check_if_full())
    {
        top_of_stack++;
        Stackarray[top_of_stack] = val;
        return True;
    }
    return False;
}

bool pop(int* Ptr){
    if(False == Check_if_empty())
    {
        *Ptr = Stackarray[top_of_stack];
        top_of_stack--;
        return True;
    }
    return False;
}

bool peek(int* Ptr){
    if(False == Check_if_empty())
    {
        *Ptr = Stackarray[top_of_stack];
        //top_of_stack--;
        return True;
    }
    return False;
}

int size()
{
    return top_of_stack + 1;
}

bool Check_if_empty()
{
    if(-1 == top_of_stack)
        return True;

    return False;
}

bool Check_if_full()
{
    if(MAX_STACK_SIZE == top_of_stack + 1)
        return True;

    return False;
}

void Out_Stack()
{
    if(True == Check_if_empty())
        return;
    printf("***************\n");
    for(int i = top_of_stack; -1 < i; i--)
    {
        printf("at position %d ->  %d\n", i, Stackarray[i]);
    }
    printf("***************\n");
}


// Main function is commented out

int main()
{
    create();

    push(100);
    push(20);
    push(40);
    push(50);
    push(90);
    push(95);
    Out_Stack();
    int Num = 0;

    if(pop(&Num) == True)
        printf("%d\n",Num);
    
    if(pop(&Num) == True)
        printf("%d\n",Num);
    
    if(peek(&Num) == True)
        printf("%d\n",Num);
    
    if(peek(&Num) == True)
        printf("%d\n",Num);
    
    if(pop(&Num) == True)
        printf("%d\n",Num);
    
    Out_Stack();
    destroy();
    return 0;
}