#include<iostream>

using namespace std;

namespace Stack_Adt
{
    class Stack
    {
        public:
            Stack(int Size);

            void Destroy();

            bool Push(int Val);

            bool Pop(int* Num);

            bool Peek(int* Num);

            void Print_Stack();

            int Size();

    };
}
