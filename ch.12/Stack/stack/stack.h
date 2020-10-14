#ifndef STACK_H
#define STACK_H

typedef char StackEntry;

//#define IMPLEMENTATION --> Array-based
//#undef  IMPLEMENTATION --> Linked-based
#define IMPLEMENTATION

#ifdef   IMPLEMENTATION  //Array-based

    #define  MAXSTACK 5

    typedef struct stack
    {
        int StackTop;
        StackEntry entry[MAXSTACK];
    }Stack;

#else  //Linked-based

    typedef struct stacknode{
        StackEntry data;
        struct stacknode *next;
    }StackNode;

    typedef struct stack{
        StackNode *StackTop;
        int size;
    }Stack;

#endif // IMPLEMENTATION

void InitializeStack(Stack *ps);
void push(StackEntry e, Stack *ps);
void pop(StackEntry *pe, Stack *ps);
int StackEmpty(Stack *ps);
int StackSize(Stack *ps);
void StackTop(StackEntry *pe, Stack *ps);
void TraverseStack(Stack *ps , void (*pf)(StackEntry));
void Display(StackEntry e);
void ClearStack(Stack *ps);

#endif // STACK_H
