#define Max_SIZE 50

typedef enum
{
    True = 1,
    False = 0
} Bool;


void create();

Bool enqueue(int);

Bool dequeue();

Bool Front(int *);

Bool Back(int *);

int Size();

void Out_Queue();

