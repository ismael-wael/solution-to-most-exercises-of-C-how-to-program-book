#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    List x;
    CreateList(&x);
    for(int i = 0 ; i<5;i++)
    {
        if(!ListFull(&x))
        {
            InsertList (i, i*2, &x);
        }
    }
    ListEntry y;

    DeleteList (2,&y,&x);
    RetrieveList(1,&y,&x);
    printf("%d",y);
    return 0;
}
