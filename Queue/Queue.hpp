#include<iostream>

namespace Queue_ADT
{
    class Queue
    {
        public : 

            Queue(int);

            void Create();

            void Destroy();

            bool Enqueue(int);

            bool Dequeue(int*);

            bool Front(int*);

            bool Back(int*);

            void Print_Queue();

            int Size();

    };
}