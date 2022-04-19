#include<iostream>
#include "Queue.hpp"

namespace Queue_ADT
{
    int Front_Ind = 0;
    int Back_Ind = 0;
    int Size_of_Queue = 0;
    int* Queue_Arr = NULL;

    bool isEmpty()
    {
        if(Back_Ind - Front_Ind == 0)
            return true;

        return false;
    }

    bool isFull()
    {
        if(Back_Ind + 1 == Size_of_Queue)
            return true;

        return false;
    }

    int size()
    {
        return Back_Ind - Front_Ind;
    }

    Queue::Queue(int Size)
    {
        this->Destroy();
        Queue_Arr = (int*)malloc(sizeof(int) * Size);
        Size_of_Queue = Size;
        Front_Ind = 0;
    }

    void Queue::Destroy()
    {
        if(NULL != Queue_Arr)
        {
            free(Queue_Arr);
            Queue_Arr = NULL;
        }
        Size_of_Queue = 0;
        Front_Ind = 0;
        Back_Ind = 0;
    }

    int Queue::Size()
    {
        return size();
    }

    bool Queue::Enqueue(int Val)
    {
        if(!isFull())
        {
            Queue_Arr[Back_Ind++] = Val;
            return true;
        }

        return false;
    }

    bool Queue::Dequeue(int* Num)
    {
        if(!isEmpty())
        {
            *Num = Queue_Arr[Front_Ind++];
            return true;
        }

        return false;
    }

    bool Queue::Front(int* Num)
    {
        if(!isEmpty())
        {
            *Num = Queue_Arr[Front_Ind];
            return true;
        }

        return false;0
    }


}