#include "doubly_linked_list.h"
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
    pl->current = NULL;
    pl->ListSize=0;//position to be inserted into
    pl->currentpos = -1;//nothing created yet
}

void DestroyList(List *pl)
{
    ListNode *temp;
    temp= pl->current->previous;
    ListNode *hold;
    while(pl->current) //clear right direction (clear >= current)
    {
        hold= pl->current->next;
        free(pl->current);
        pl->current = hold;
    }
    pl->current = temp;
    while(pl->current) //clear left direction (clear < current)
    {
        hold= pl->current->previous;
        free(pl->current);
        pl->current = hold;
    }
    pl->ListSize = 0;
    pl->currentpos = -1;
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
    ListNode *temp;
    if(node != NULL)//check that malloc actually allocated some space in memory
    {
        node->entry = e;
        node->next = NULL;
        node->previous = NULL;

        if(p == 0 && (pl->current == NULL))// no element at all
        {
            pl->current=node;
        }
        else
        {
            if(p > pl->currentpos)
            {
                for(;pl->currentpos < p-1; pl->currentpos++)
                    pl->current = pl->current->next;

                temp = pl->current->next;
                pl->current->next = node;
                node->previous = pl->current;
                if(temp != NULL)
                    temp->previous = node;
                node->next = temp;
                pl->current = node;
            }
            else if (p < pl->currentpos)
            {
                for(;pl->currentpos > p; pl->currentpos--)
                    pl->current = pl->current->previous;

                temp = pl->current->previous;
                pl->current->previous = node;
                node->next = pl->current;
                if(temp != NULL)
                    temp->next = node;
                node->previous = temp;
                pl->current = node;
            }
        }
        pl->currentpos = p;
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
    ListNode* temp; //holds the previous element
    ListNode* hold; //holds the next element
    if(pl->currentpos >= p)
    {
        while(pl->currentpos > p)
        {
            pl->current=pl->current->previous;
            pl->currentpos--;
        }
        *pe = pl->current->entry;
        temp = pl->current->previous;
        hold = pl->current->next;
        free(pl->current);
        hold->previous = temp;
        if(temp != NULL)
            temp->next = hold;
        pl->current = hold;
    }
    else if(pl->currentpos < p)
    {
        while(pl->currentpos < p)
        {
            pl->current=pl->current->next;
            pl->currentpos++;
        }
        *pe = pl->current->entry;
        temp = pl->current->previous;
        hold = pl->current->next;
        free(pl->current);
        temp->next = hold;
        if(hold != NULL)
            hold->previous = temp;
        pl->current = temp;
    }

    pl->currentpos = p;
    pl->ListSize--;
}

//copy the element in p position
void RetrieveList(int p, ListEntry *pe, List *pl)
{
    if(pl->currentpos > p)
    {
        while(pl->currentpos > p)
        {
            pl->current=pl->current->previous;
            pl->currentpos--;
        }
    }
    else if(pl->currentpos < p)
    {
        while(pl->currentpos < p)
        {
            pl->current=pl->current->next;
            pl->currentpos++;
        }
    }
    *pe = pl->current->entry;
}

void ReplaceList(int p, ListEntry e, List *pl)
{
    if(p >= pl->currentpos) // out of range elements
    {
        while(pl->currentpos < p)
        {
            pl->current=pl->current->next;
            pl->currentpos++;
        }
    }
    else
    {
        while(pl->currentpos > p)
        {
            pl->current=pl->current->previous;
            pl->currentpos--;
        }
    }
    pl->current->entry = e;
    pl->currentpos = p ;
}

void TraverseList(List *pl, void (*pf)(ListEntry))
{
    ListNode *temp = pl->current;
    while(pl->current) // >= current place
    {
        (*pf)(temp->entry);
        pl->current = pl->current->next;
    }
    pl->current = temp->previous;
    while(pl->current) // >= current place
    {
        (*pf)(temp->entry);
        pl->current = pl->current->previous;
    }
}

#endif // IMPLEMENTATION


