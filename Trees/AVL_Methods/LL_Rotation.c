#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
    int height;
};

int NodeHeight(struct Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl > hr ? hl + 1 : hr + 1;
}

int balanceFactor(struct Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl - hr;
}

struct Node *LLrotation(struct Node *p, struct Node *root)
{
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    if (p == root)
        root = pl;
    return pl;
}

struct Node *LRrotation(struct Node *p, struct Node *root)
{

    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;

    plr->lchild = pl;
    plr->rchild = p;

    pl->height = NodeHeight(pl);
    p->height=NodeHeight(p);
    plr->height = NodeHeight(plr);

 if (p == root)
        root = plr;
    return plr;
}
struct Node *RRrotation(struct Node *p, struct Node *root)
{
    return NULL;
}
struct Node *RLrotation(struct Node *p, struct Node *root)
{
    return NULL;
}

struct Node *insert(struct Node *p, int key, struct Node *root)
{

    if (p == NULL)
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = key;
        new_node->lchild = new_node->rchild = NULL;
        return new_node;
    }
    if (p->data > key)
    {
        p->lchild = insert(p->lchild, key, root);
    }
    else if (p->data < key)
    {
        p->rchild = insert(p->rchild, key, root);
    }
    p->height = NodeHeight(p);

    if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1)
    {
        return LLrotation(p, root);
    }
    else if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == -1)
    {
        return LRrotation(p, root);
    }
    else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == -1)
    {
        return RRrotation(p, root);
    }
    else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == 1)
    {
        return LRrotation(p, root);
    }
    return p;
}
void inOrder(struct Node *root)
{
    if (!root)
        return;

    printf("%d ", root->data);
    inOrder(root->lchild);
    inOrder(root->rchild);
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 10, root);
    root = insert(root, 5, root);
    root = insert(root, 2, root);

    inOrder(root);
    return 0;
}