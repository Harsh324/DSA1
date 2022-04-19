#include "Stack.hpp"


namespace Stack_Adt
{
    int Top_of_Stack = -1;
    int Size_of_Stack = 0;
    int* Stack_Arr = NULL;


    bool isFull()
    {
        if(Top_of_Stack + 1 == Size_of_Stack)
            return true;

        return false;
    }

    bool isEmpty()
    {
        if(-1 == Top_of_Stack)
            return true;

        return false;
    }

    Stack::Stack(int Size)
    {
        this->Destroy();
        Size_of_Stack = Size;
        Stack_Arr = (int*)malloc(sizeof(int)*Size_of_Stack);
        Top_of_Stack = -1;
    }

    void Stack::Destroy()
    {
        if(NULL != Stack_Arr)
        {
            free(Stack_Arr);
            Stack_Arr = NULL;
        }
        Size_of_Stack = 0;
        Top_of_Stack = -1;
        
    }

    bool Stack::Push(int Val)
    {
        if(!isFull())
        {
            Top_of_Stack++;
            Stack_Arr[Top_of_Stack] = Val;
            return true;
        }

        return false;
    }

    bool Stack::Pop(int* Num)
    {
        if(!isEmpty())
        {
            *Num = Stack_Arr[Top_of_Stack];
            Top_of_Stack--;
            return true;
        }

        return false;
    }

    bool Stack::Peek(int* Num)
    {
        if(!isEmpty())
        {
            *Num = Stack_Arr[Top_of_Stack];
            return true;
        }
        return false;
    }

    int Stack::Size()
    {
        return Top_of_Stack + 1;
    }


    void Stack::Print_Stack()
    {
        int i = Top_of_Stack;
        int Flag = true;
        while(i > -1)
        {
            if(Flag)
            {
                cout<<"Stack : "<<endl;
                cout<<"\t"<<"(" <<i <<") => "<<Stack_Arr[i]<<"\t"<<" => Top"<<endl;
                Flag = false;
            }
            else
                cout<<"\t"<<"(" <<i <<") => "<<Stack_Arr[i]<<endl;
            i--;
        }
    }

}


using namespace Stack_Adt;


int main()
{
    Stack St = Stack(10);
    St.Push(50);
    St.Push(40);
    St.Push(30);
    St.Push(20);
    St.Push(10);
    St.Print_Stack();
    int Num = 0;

    if(St.Peek(&Num))
        cout<<"\n"<<"\t"<<" Peeked "<<Num<<endl;
    St.Print_Stack();

    if(St.Pop(&Num))
        cout<<"\n"<<"\t"<<" Popped "<<Num<<endl;
    St.Print_Stack();
    cout<<St.Size()<<endl;
    if(St.Pop(&Num))
        cout<<"\n"<<"\t"<<" Popped "<<Num<<endl;

    if(St.Pop(&Num))
        cout<<"\n"<<"\t"<<" Popped "<<Num<<endl;

    if(St.Pop(&Num))
        cout<<"\n"<<"\t"<<" Popped "<<Num<<endl;

    if(St.Pop(&Num))
        cout<<"\n"<<"\t"<<" Popped "<<Num<<endl;

    if(St.Pop(&Num))
        cout<<"\n"<<"\t"<<" Popped "<<Num<<endl;
    else
        cout<<"Stack is empty"<<endl;

}