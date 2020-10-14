#ifndef LIST_H
#define LIST_H

typedef int ListEntry;

//#define --> Array-based
//#undef  --> Linked-based
#undef IMPLEMENTATION

#ifdef   IMPLEMENTATION  //Array-based

    #define MAXLIST 100

    typedef struct lists{
        ListEntry entry[MAXLIST];
        int ListSize;
    }List;

void InsertList (int p, ListEntry e, List *pl);//Array-Based
#else  //Linked-based

    typedef struct listnode{
        ListEntry entry;
        struct listnode *next;
        struct listnode *previous;
    }ListNode;

    typedef struct lists{
        ListNode *current;
        int ListSize, currentpos;
    }List;

int InsertList (int p, ListEntry e, List *pl);//Linked-based
#endif // IMPLEMENTATION

void CreateList(List *pl);
void DestroyList(List *pl);
int ListSize(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
void DeleteList (int p, ListEntry *pe, List *pl);
void RetrieveList(int p, ListEntry *pe, List *pl);
void ReplaceList(int p, ListEntry e, List *pl);
void TraverseList(List *pl, void (*pf)(ListEntry));

#endif // LIST_H


