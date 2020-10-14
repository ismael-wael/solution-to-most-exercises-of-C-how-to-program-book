#ifndef LIST_H
#define LIST_H

typedef char ListEntry;

//#define --> Array-based
//#undef  --> Linked-based
#undef IMPLEMENTATION

#ifdef   IMPLEMENTATION  //Array-based

    #define MAXLIST 100

    typedef struct lists{
        ListEntry entry[MAXLIST];
        int ListSize;
    }List;

#else  //Linked-based

    typedef struct listnode{
        ListEntry entry;
        struct listnode *next;
    }ListNode;

    typedef struct lists{
        ListNode *head, *current;
        int ListSize, currentpos;
    }List;


#endif // IMPLEMENTATION

void CreateList(List *pl);
void DestroyList(List *pl);
int ListSize(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
void InsertList (int p, ListEntry e, List *pl);//Array-Based
int InsertList (int p, ListEntry e, List *pl);//Linked-based
void DeleteList (int p, ListEntry *pe, List *pl);
void RetrieveList(int p, ListEntry *pe, List *pl);
void ReplaceList(int p, ListEntry e, List *pl);
void TraverseList(List *pl, void (*pf)(ListEntry));

#endif // LIST_H

