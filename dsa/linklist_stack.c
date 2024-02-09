#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int isEmpty(struct node *top){
    if (top==NULL)
    {
        return 1;
    }
    else {
        return 0;
    }
}
int isFull(struct node *top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if (p==NULL)
    {
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    struct node *top=NULL;
    return 0;
}