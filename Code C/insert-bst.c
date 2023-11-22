#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node *));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void insert(struct node *root, int key)
{
    struct node *prev;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Cannot insert %d, already in bst", key);
        }
        else if (key < root->data)
            {root = root->left;
             } else
            {
                root = root->right;
            }
    }
    struct node *new = createnode(key);
    if (key < root->data)
    {
        root->left = new;
    }
    else
    {
        root->right = new;
    }
}
int main()
{
    struct node *p = createnode(5);
    struct node *q = createnode(3);
    struct node *r = createnode(6);
    struct node *s = createnode(1);
    struct node *t = createnode(4);

    p->left = q;
    p->right = r;
    q->left = s;
    q->right = t;

    insert(p, 9);
    printf("%d", p->right->right->data);

    return 0;
}
