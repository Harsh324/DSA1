#define Max_SIZE 50


/*
* Since Boolean data type is not in c hence creating one for use
*/
typedef enum
{
    True = 1,
    False = 0
} Bool;


/*
* create method creates the queue, initializes the memory.
*/
void create();


/*
* enqueue method is used to insert element in the queue.
* Since queue is FIFO , hence elements is added to start of queue. Normally as happens in peoples queue.
*/
Bool enqueue(int);


/*
* dequeue method is used to pop our elements fromthe queue.
* since queue is FIFO(first in first out) hence dequeue pops out fist inserted element.
*/
Bool dequeue();


/*
* Front method takes address of a variable and returns current front of the queue if queue is empty.
*/
Bool Front(int *);


/*
* Back method takes address of a variable and returns current back of the queue if queue is empty.
*/
Bool Back(int *);


/*
* This method gives the length of the queue.
*/
int Size();


/*
* This method prints the queue.
*/
void Out_Queue();

