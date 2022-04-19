#include<iostream>
#include "Queue.hpp"
using namespace std;

namespace Queue_ADT
{
    int Front_Ind = 0;
    int Back_Ind = 0;
    int Size_of_Queue = 0;
    int* Queue_Arr = NULL;

    bool isEmpty()
    {
        if(Back_Ind == Front_Ind)
            return true;

        return false;
    }

    bool isFull()
    {
        if(Back_Ind == Size_of_Queue)
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
        Back_Ind = 0;
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

        return false;
    }

    bool Queue::Back(int* Num)
    {
        if(!isEmpty())
        {
            *Num = Queue_Arr[Back_Ind - 1];
            return true;
        }
        return false;
    }

    void Queue::Print_Queue()
    {
        cout<<"Queue"<<endl;
        for(int i = Back_Ind - 1; i >= Front_Ind ; i--)
        {
            if(i == Front_Ind)
                cout<<"\t("<<i<<")  => "<<Queue_Arr[i]<<"\t => Front"<<endl;
            else if(i == Back_Ind - 1)
                cout<<"\t("<<i<<")  => "<<Queue_Arr[i]<<"\t => Back"<<endl;

            else
                cout<<"\t("<<i<<")  => "<<Queue_Arr[i]<<endl;
        }
    }
}


using namespace Queue_ADT;

int main()
{
    Queue Q = Queue(10);
    Q.Enqueue(50);
    Q.Enqueue(60);
    Q.Enqueue(70);
    Q.Enqueue(80);
    Q.Enqueue(90);
    Q.Enqueue(100);
    Q.Print_Queue();

    int Num = 0;
    if(Q.Front(&Num))
        cout<<"Front is = "<<Num<<endl;
    if(Q.Back(&Num))
        cout<<"Back is = "<<Num<<endl;

    if(Q.Dequeue(&Num))
        cout<<Num<<" is Dqueued"<<endl;
    Q.Print_Queue();

    Q.Enqueue(200);
    Q.Enqueue(300);
    Q.Enqueue(400);
    Q.Enqueue(500);
    Q.Enqueue(600);
    Q.Enqueue(700);

    Q.Print_Queue();
    
    for(int i = 0; i < 5; i++)
    {

        if(Q.Dequeue(&Num))
            cout<<Num<<" is Dqueued"<<endl;
        else
            cout<<"Can't Dequeued"<<endl;
        Q.Print_Queue();
    }

    Q.Enqueue(1000);
    Q.Print_Queue();
    Q.Enqueue(2000);
    Q.Print_Queue();
    
}