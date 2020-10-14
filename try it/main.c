#include <stdio.h>
#include <stdlib.h>

/* node Data type */
typedef struct node{
    int Data;
    struct node * next ;
}Node;

Node* head = NULL;
Node* current = NULL;

void insertAtLast(int data)
{
    /* Allcate Node */
    struct node * link = (struct node *) malloc(sizeof(struct node));

    /* Node Initialization */
    link -> Data = data;
    link -> next = NULL;

    /* check if the list is empty */
    if(head == NULL)
    {
        head = link ;
        return ;
    }
    current = head ;

    /* find the last node */
    while(current -> next != NULL)
    {
        /* current increment */
        current = current -> next ;
    }

    /* insert node to the list */
    current -> next = link ;
}

void insertAtFrond(int data)
{
    /* Allcate Node */
    Node* link = (struct node *) malloc(sizeof(struct node));

    /* Node Initialization */
    link -> Data = data;

    /* check if the list is empty */
    if(head == NULL)
    {
        head = link ;
        link->next = NULL;
        return ;
    }
    /* insert node to the list */
    Node* temp = head;
    head = link;
    link->next = temp ;
}

void PrintList(void)
{
    struct node * ptr = head ;
    printf("[head] =>");
    /* start printing */
    while(ptr != NULL)
    {
        printf(" %d =>" , ptr -> Data);

        /* increment pointer */
        ptr = ptr -> next ;
    }
    printf(" [NULL]\n");
}

int findSize(void)
{
    Node* temp = head;
    int size = 0;
    while(temp)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

int searchForElement(int element)
{
    Node* temp = head;
    int i = 0;
    while(temp)
    {
        if(temp->Data == element)
            return i+1;
        i++;
        temp = temp->next;
    }
    return -1;
}

void deleteNode(int element)
{
    Node* prev;
    Node* temp = head;

    while(temp)
    {
        if(temp->Data == element)
        {
            Node* hold = temp;
            prev->next = temp->next;
            free(hold);
        }
        prev = temp;
        temp = temp->next;
    }
}

void main (void)
{
    insertAtLast(10);
    insertAtLast(20);
    insertAtLast(30);
    insertAtLast(40);
    insertAtLast(50);
    insertAtFrond(70);
    PrintList();
    deleteNode(50);
    PrintList();
    //printf("%d\n",findSize());
    //printf("%d\n",searchForElement(40));
}
