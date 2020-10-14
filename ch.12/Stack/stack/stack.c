#include "stack.h"
#include <stdlib.h>

//#define IMPLEMENTATION --> Array-based
//#undef  IMPLEMENTATION --> Linked-based
#define IMPLEMENTATION

#ifdef   IMPLEMENTATION  //Array-based

void InitializeStack(Stack *ps)
{
    ps->StackTop = 0;
}

void push(StackEntry e , Stack *ps)
{
    ps->entry[ps->StackTop] = e;
    ps->StackTop++;
}

void pop(StackEntry *pe , Stack *ps)
{
    ps->StackTop--;
    *pe = ps->entry[ps->StackTop];
}

int StackFull(Stack *ps)
{
    return ps->StackTop == MAXSTACK;
}

int StackEmpty(Stack *ps)
{
    return ps->StackTop == 0;
}

int StackSize(Stack *ps)
{
    return ps->StackTop;
}

void ClearStack(Stack *ps)
{
    ps->StackTop = 0;
}

void StackTop(StackEntry *pe , Stack *ps)
{
    *pe = ps->entry[ps->StackTop - 1];
}

void TraverseStack(Stack *ps , void (*pf)(StackEntry))
{
    for(;ps->StackTop != 0 ; ps->StackTop--)
        (*pf)(ps->entry[ps->StackTop-1]);
	//ps->entry[ps->StackTop-1]  : this is the stackentry for Display function
}

void Display(StackEntry x)
{
    printf("%c",x);
}

#else//Linked-based

void InitializeStack(Stack *ps)
{
    ps->StackTop = NULL;
    ps->size = 0;
}

void push(StackEntry e, Stack *ps)
{
    StackNode *node = (StackNode*)malloc(sizeof(StackNode));
   if(node != NULL)//check that malloc actually allocated some space in memory
    {
        node->data = e;
        node->next = ps->StackTop;
        ps->StackTop = node;
        ps->size++;
    }
}

void pop(StackEntry *pe, Stack *ps)
{
    StackNode *tmp = ps->StackTop;
    ps->StackTop = ps->StackTop->next;
    *pe = tmp->data;
    free(tmp);
    ps->size--;
}

int StackEmpty(Stack *ps)
{
    return ps->StackTop == NULL;
}

int StackFull(Stack *ps)
{
    StackNode *x = (StackNode*)malloc(sizeof(StackNode));
    if(node != NULL)
    {
        free(x);
        return 0;
    }
    else
    {
        free(x);
        return 1;
    }
}

int StackSize(Stack *ps)
{
    return ps->size;
}

void StackTop(StackEntry *pe, Stack *ps)
{
    *pe = ps->StackTop->data;
}

void TraverseStack(Stack *ps , void (*pf)(StackEntry))
{
    for(StackNode *tmp = ps->StackTop ; tmp ; tmp = tmp->next)
        (*pf)(tmp->data);
}

void Display(StackEntry e)
{
    printf("%c",e);
}

void ClearStack(Stack *ps)
{
    while(ps->StackTop != NULL)
    {
        StackNode
         *tmp = ps->StackTop;
        ps->StackTop = tmp->next;
        free(tmp);
    }
}

#endif // IMPLEMENTATION
