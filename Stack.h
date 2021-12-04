#define MAX_STACK_SIZE 50


/*
* Since there is no any boolean varibale type in c langauge hence we defined own
*/
typedef enum
{
    TRUE = 1,
    FALSE = 0
}bool;



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


bool check_if_full();


bool check_if_empty();



