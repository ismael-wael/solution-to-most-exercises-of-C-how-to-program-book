#include "list.h"
#include <stdlib.h>

//#define --> Array-based
//#undef  --> Linked-based
#undef IMPLEMENTATION

#ifdef   IMPLEMENTATION  //Array-based

void CreateList(List *pl)
{
    pl->ListSize = 0 ;
}

int ListSize(List *pl)
{
    return pl->size;
}

void DestroyList(List *pl)
{
    pl->ListSize = 0 ;
}

int ListEmpty(List *pl)
{
    return !pl->ListSize;
}

int ListFull(List *pl)
{
    return pl->ListSize == MAXLIST;
}

/* 0 <= p <= size*/
void InsertList (int p, ListEntry e, List *pl)
{
    for(int i = pl->ListSize; i > p ; i-- )
        pl->entry[i] = pl->entry[i-1];
    pl->entry[p] = e;
    pl->ListSize++;
}

/* 0 <= p <= size-1*/
void DeleteList (int p, ListEntry *pe, List *pl)
{
    *pe = pl->entry[p];
    for(int i = p; i < pl->ListSize-1 ; i-- )
        pl->entry[i] = pl->entry[i+1];
    pl->ListSize--;
}

//copy the element in p position
void RetrieveList(int p, ListEntry *pe, List *pl)
{
    *pe = pl->entry[p];
}

void ReplaceList(int p, ListEntry e, List *pl)
{
    pl->entry[p]= e;
}

void TraverseList(List *pl, void (*pf)(ListEntry))
{
    for(int i = 0 ; i < pl->ListSize ; i++)
        (*pf) (pl->entry[i]);
}

#else  //Linked-based

void CreateList(List *pl)
{
    pl->head = NULL;
    pl->ListSize=0;//place to be inserted into
    pl->currentpos = -1;//nothing created yet
    pl->current = pl->head;
}

void DestroyList(List *pl)
{
    ListNode *temp ;
    while(pl->head ) // pl->head != NULL
    {
        temp= pl->head->next;
        free(pl->head);
        pl->head = temp;
    }
    pl->ListSize = 0;
}

int ListSize(List *pl)
{
    return pl->ListSize;
}

int ListEmpty(List *pl)
{
    return !pl->ListSize;
}

int ListFull(List *pl)
{
    ListNode *x = (ListNode*)malloc(sizeof(ListNode));
    if(x != NULL)
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

/* 0 <= p <= size*/
int InsertList (int p, ListEntry e, List *pl)
{
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    if(node != NULL)//check that malloc actually allocated some space in memory
    {
        node->entry = e;
        node->next = NULL;

        if(p == 0)
        {
            node->next = pl->head;
            pl->head = node;
            pl->currentpos = 0;
            pl->current = pl->head;
        }
        else
        {
            if(p <= pl->currentpos) // out of range elements
            {
                pl->currentpos = 0;//as i = 0
                pl->current = pl->head; // as ListNode *temp
            }
            for(;pl->currentpos != p -1; pl->currentpos++)
                pl->current = pl->current->next;
            node->next = pl->current->next;
            pl->current->next = node;
        }
        pl->ListSize++;
        return 1;
    }
    else
    {
        return 0;
    }
}

/* 0 <= p <= size-1*/
void DeleteList (int p, ListEntry *pe, List *pl)
{
    ListNode *temp;

    if(p==0)
    {
        *pe = pl->head->entry;
        pl->current = pl->head->next;
        free(pl->head);
        pl->head = pl->current;
        pl->currentpos = 0;
    }
    else
    {
        if(p <= pl->currentpos) // out of range elements
        {
            pl->currentpos = 0;//as i = 0
            pl->current = pl->head; // as ListNode *temp
        }
        for(;pl->currentpos != p -1; pl->currentpos++)
            pl->current = pl->current->next;
        *pe = pl->current->next->entry;
        temp = pl->current->next->next;
        free(pl->current->next);
        pl->current->next = temp;
    }
    pl->ListSize--;
}

//copy the element in p position
void RetrieveList(int p, ListEntry *pe, List *pl)
{
    if(p <= pl->currentpos) // out of range elements
    {
        pl->currentpos = 0;//as i = 0
        pl->current = pl->head; // as ListNode *temp
    }
    for(;pl->currentpos != p ; pl->currentpos++)
        pl->current = pl->current->next;
    *pe = pl->current->next->entry;
}

void ReplaceList(int p, ListEntry e, List *pl)
{
    if(p <= pl->currentpos) // out of range elements
    {
        pl->currentpos = 0;//as i = 0
        pl->current = pl->head; // as ListNode *temp
    }
    for(;pl->currentpos != p ; pl->currentpos++)
        pl->current = pl->current->next;
    pl->current->entry = e;
}

void TraverseList(List *pl, void (*pf)(ListEntry))
{
    ListNode *temp = pl->head;
    while(temp)
    {
        (*pf)(temp->entry);
        temp = temp->next;
    }
}

#endif // IMPLEMENTATION

