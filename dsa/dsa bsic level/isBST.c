#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int isBSTUtil(struct node *root, struct node *prev)
{
    if (root != NULL)
    {
        if (!isBSTUtil(root->left, prev))
        {
            return 0;
        }

        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }

        prev = root;
        return isBSTUtil(root->right, prev);
    }
    return 1;
}

int isBST(struct node *root)
{
    return isBSTUtil(root, NULL);
}

int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("Inorder Traversal: ");
    inorderTraversal(p);
    printf("\n");

    if (isBST(p))
    {
        printf("This is a BST\n");
    }
    else
    {
        printf("This is not a BST\n");
    }

    return 0;
}


// int main()
// {
//     struct node *p = creatNode(5);
//     struct node *p1 = creatNode(3);
//     struct node *p2 = creatNode(6);
//     struct node *p3 = creatNode(1);
//     struct node *p4 = creatNode(4);
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;  // Fix: Assign p3 to p1->left
//     p1->right = p4;
//     inorder(p);
//     printf("\n");
//     if (isBST(p))
//     {
//         printf("This is a BST\n");
//     }
//     else
//     {
//         printf("This is not a BST\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// void preOrder(struct  node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void postOrder(struct  node* root){
//     if(root!=NULL){
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inOrder(struct  node* root){
//     if(root!=NULL){
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }

// int isBST(struct  node* root){
//     static struct node *prev = NULL;
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         if(prev!=NULL && root->data <= prev->data){
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else{
//         return 1;
//     }
// }

// int main(){
     
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4  

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     // preOrder(p);
//     // printf("\n");
//     // postOrder(p); 
//     // printf("\n");
//     inOrder(p);
//     printf("\n");
//     // printf("%d", isBST(p)); 
//     if(isBST(p)){
//         printf("This is a bst" );
//     }
//     else{
//         printf("This is not a bst");
//     }
//     return 0;
// }
