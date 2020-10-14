#include <stdio.h>
#include <stdlib.h>
#include "doubly_linked_list.h"

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
    InsertList (0, 100, &x);
    InsertList (2, 7, &x);
    InsertList (5, 45, &x);
    ListEntry y;
    DeleteList (1, &y, &x);
    DeleteList (1, &y, &x);
    ReplaceList(5, 9, &x);
    RetrieveList(4,&y,&x);
    printf("%d %d\n",y,ListSize(&x));
    return 0;
}
