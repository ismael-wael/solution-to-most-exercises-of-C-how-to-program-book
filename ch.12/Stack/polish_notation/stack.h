/*this is a generic stack, means that the same stack can hold different 
elements of different data types in any order
the trick is that every position in the array stack
is a pointer to structure called "Element"
each structure has two fields :
          1 - int size : holds the size of the element 
		  2 - pointer to void : holds the address of the element in memory
so that's why it's generic,
because all elements of stack has same space {int size , pointer to void that holds the address in memory}
now, to pop elements from stack
first check the size field
if it's 1 : you know you only need one byte from that address hold by pointer to void		  
if it's 2 : you know you only need two byte from that address hold by pointer to void

and to push elements into stack, you must send it's size with it, to be stored with the element in the size field in Element structure
*/
#ifndef STACK_H
#define STACK_H

#define  MAXSTACK 16
typedef int u32;

typedef struct element
{
    int size;
    void *stackentry;
}Element;

typedef struct stack
{
    int StackTop;
    Element *entry[MAXSTACK];
}Stack;

void InitializeStack(Stack *ps);
void push(void *pe, Stack *ps,int ElementSize);
void pop(void *pe , Stack *ps, int *z);// z is the size of the popped element
int StackEmpty(Stack *ps);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);
void StackTop(void *pe , Stack *ps, int *z);


#endif // STACK_H

