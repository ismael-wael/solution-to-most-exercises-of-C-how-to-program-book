#ifndef STACK_H
#define STACK_H
// in case you don't know the type of elements in the stack
//then when you pop them, you need to switch "etype" in StackEntry
//to know the conversion specifier to use and the type of StackEntry elements
#define  INT   0
#define  CHAR  1
#define  FLOAT 2

typedef struct stackentry{
    short int etype;
    union{
        int int_type;
        char char_type;
        float float_type;
    }info;
}StackEntry;

//#define --> Array-based
//#undef  --> Linked-based
#undef IMPLEMENTATION

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
