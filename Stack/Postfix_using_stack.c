#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>
#include<ctype.h>

int* Stackarray = NULL;
int top_of_stack = -1;

// Stack implementation
void create()
{
    //destroy();
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


// Postfix implementation

/*
* Converts the charater to integer
*/
int Convert_to_Char(char c)
{
    return c - '0';
}


/*
* Basic Idea behind this is using stack traverse given postfix
* character array . if you encounter integer push it in stack.
* if you get any one of them ('+', '-', '*', '/') then,
* pop current top and next top do the operation and push result
* continue for the remaing character array.
*/
int Get_value(char post[] , int len)
{
    int Res;
    for(int i = 0; i < len; i++)
    {
        if(!isdigit(post[i]))
        {
            //int Val = atoi(post[i]);
            push('0' - post[i]);
            Out_Stack();
        }
        else
        {
            int First , Second;
            pop(&Second);
            pop(&First);
            printf("************\n");
            switch(post[i])
            {
                case '/':
                    push(First / Second);
                    break;
                case '*':
                    push(First * Second);
                    break;
                case '+':
                    push(First + Second);
                    break;
                case '-':
                    push(First - Second);
                    break;
            }

        }
    }
    pop(&Res);
    return Res;
}

/*

int main()
{
    // Let postfix notation is : 56+2*3-
    // so as per our algorithm this should be like (5 + 6)*2 - 3 = 19
    // Lets check it with our algorithm.

    char Post[] = {'5', '6', '+', '2', '*', '3', '-'};

    create();
    printf("Value of expression is : %d\n",Get_value(Post , 7));
    return 0;

}*/