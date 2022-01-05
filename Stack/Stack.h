
/*
* Predefined size of stack is 50 one can change stack size from here
*/
#define MAX_STACK_SIZE 50


/*
* Since there is no any boolean varibale type in c langauge hence we defined own
*/
typedef enum
{
    True = 0,
    False = 1
} bool;



/*
* This method creates the stack
*/
void create();

/*
* This method destroyes the stack an free's teh memory
*/
void destroy();


/*
* This method used to push an elemnt to stack
*/
bool push(int);


/*
* pop method is used to pop out element at the top of stack 
*/
bool pop(int*);


/*
* peek method is used to just check top of stack not pop
*/
bool peek(int*);


/*
* This method is used to get length of of our current stack
*/
int Len();


/*
* using Check_if_full method we can check is stack is full
*/
bool Check_if_full();


/*
* using Check_if_empty method one can check if stack is empty
*/
bool Check_if_empty();


/*
* Out_Stack method is used to print the current stack 
*/
void Out_Stack();



