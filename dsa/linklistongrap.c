#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        // inoder treverser
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
void preoder(struct node *root)
{
    if (root != NULL)
    {
        // inoder treverser
        printf("%d ", root->data);
        preoder(root->left);
        preoder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        // inoder treverser
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{

    /*
    // Constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */

    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    preoder(p);
    printf("prerder Traversal: \n");
    inorderTraversal(p);
    printf("Inorder Traversal: \n");
    postorder(p);
    printf("postorder Traversal: \n");
    return 0;
}