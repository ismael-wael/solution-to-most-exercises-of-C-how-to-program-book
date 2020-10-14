#ifndef TREE_H
#define TREE_H

typedef char TreeEntry;

typedef struct treeentry{
    short int etype;
    union{
        int int_type;
        char char_type;
        float float_type;
    }info;
}TreeEntry;

typedef struct treenode{
    TreeEntry entry;
    struct treenode *left,*right;
}TreeNode;

typedef struct tree{
    TreeNode *root;
    int size;
    int depth;
}Tree;

void CreateTree (Tree *);
void ClearTree  (Tree *);
int  TreeSize   (Tree *);
int  TreeDepth  (Tree *);
int TreeEmpty(Tree *pt);
int TreeFull(Tree *pt);
void Preorder  (Tree *, void (*) (TreeEntry));
void Inorder   (Tree *, void (*) (TreeEntry));
void Postorder (Tree *, void (*) (TreeEntry));


#endif // TREE_H

