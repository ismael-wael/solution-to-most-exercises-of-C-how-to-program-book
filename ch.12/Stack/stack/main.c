#include <stdio.h>
#include "stack.h"

int main(void)
{
    Stack s;
    InitializeStack(&s);
    StackEntry entry;
    printf("enter a char :");
    //scanf("%c",&entry);
    while((entry =getchar()) != EOF)
    {
        push(entry,&s);
        puts("enter a char :");
        //scanf("%c",&entry);
    }
    TraverseStack(&s, Display);
    return 0 ;
}
