#include "Tree.h"

#define EQ(a,b)     ((a) == (b))
#define LT(a,b)     ((a) < (b))
#define LE(a,b)     ((a) <= (b))
#define GT(a,b)     ((a) > (b))
#define GE(a,b)     ((a) >= (b))

void CreateTree (Tree *pt)
{
    pt->root  = NULL;
    pt->depth = 0 ;
    pt->size  = 0 ;
}

int TreeEmpty(Tree *pt)
{
    return (!pt->root);
}

int TreeFull(Tree *pt)
{
    return 0;
}

//Inorder Recursively
/*void Inorder (Tree *pt,void (*pvisit)(TreeEntry))
{
    void InorderRec(Tree *pt,void (*pvisit)(TreeEntry)); // only this function (Inorder) sees and can calls InorderRec
    InorderRec(pt->root,pvisit);
}*/

void InorderRec(Tree *pt,void (*pvisit)(TreeEntry))
{
    if(*pt)
    {
        InorderRec(&(*pt)->left,pvisit);
        (*pvisit)((*pt)->entry);
        InorderRec(&(*pt)->right,pvisit);
    }
}

//Inorder Iteratively
void Inorder (Tree *pt,void (*pvisit)(TreeEntry))
{
    Stack s;
    void *p = (void *)(*pt);
    if(p)
    {
        InitializeStack(&s);
        do{
            while(p){
                push(p,&s);
                p = (void*)(((TreeNode *)p)->left);
            }
            if(!StackEmpty(&s))
            {
                pop(&p,&s);
                (*pvisit)(((TreeNode *)p)->entry);
                p = (void*) (((TreeNode *)p)->right);
            }
        }while(!StackEmpty(&s) || p);
    }
}

void ClearTree  (Tree *pt)
{
    ClearTreeRec(pt->root);
    pt->root  = NULL;
    pt->depth = 0 ;
    pt->size  = 0 ;
}

void ClearTreeRec(Tree *pt)
{
    if(*pt)
    {
        ClearTreeRec(&(*pt)->left);
        ClearTreeRec(&(*pt)->right);
        free(*pt);
    }
}

void InsertTree(Tree *pt, TreeEntry *pe)
{
    TreeNode *p,*prev,*curr;
    int d = 1;
    p = (TreeNode*)malloc(sizeof(TreeNode));
    p->entry = *pe;
    p->left = NULL;
    p->right = NULL;
    if(!pt->root)
        pt->root = p;
    else
    {
        curr = pt->root;
        while(curr)
        {
            if(LT())
        }
    }

}

void Postorder (Tree *, void (*) (TreeEntry));
int  TreeSize   (Tree *);
int  TreeDepth  (Tree *);
void Preorder  (Tree *, void (*) (TreeEntry));
