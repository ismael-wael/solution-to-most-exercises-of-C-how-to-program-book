#include "stack.h"
#include <stdlib.h>
#include <string.h>

void InitializeStack(Stack *ps)
{
    ps->StackTop = 0;
}

void push(void *pe, Stack *ps,int ElementSize)
{
    Element *ptr = (Element*)malloc(sizeof(Element));
    ptr->size = ElementSize;
    ptr->stackentry = malloc(ElementSize);
    memcpy(ptr->stackentry,pe,ElementSize);
    ps->entry[ps->StackTop] = ptr;
    ps->StackTop++;
}

void pop(void *pe , Stack *ps, int *z)
{
    ps->StackTop--;
    *z = ps->entry[ps->StackTop]->size;
    memcpy(pe,ps->entry[ps->StackTop]->stackentry,*z);
    free(ps->entry[ps->StackTop]->stackentry);
    free(ps->entry[ps->StackTop]);
}

void StackTop(void *pe , Stack *ps, int *z)
{
    *z = ps->entry[ps->StackTop-1]->size;
    memcpy(pe,ps->entry[ps->StackTop-1]->stackentry,*z);
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








