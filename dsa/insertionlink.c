#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node * ptr){
   while (ptr != NULL)
   {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
   }
}

struct node * insertAtFirst(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    head=ptr;
    ptr->data = data;
    return head;
}
struct node * insertAtEnd(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
     ptr->data=data;
     struct node * p =head;
    
     while (p->next!=NULL)
     {
        p=p->next;
     }
     
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node * insertAtnode(struct node *head,struct node *prevnode,int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
     ptr->data=data;
     ptr->next=prevnode->next;
     prevnode->next=ptr;
    return head;
}

struct node * insertAtIndex(struct node *head, int data, int index){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p =head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}

int main(){
    
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 41;
    second->next = third;

    third->data = 56;
    third->next = NULL;

    printf("Original linked list:\n");
    linkedListTraversal(head);

   
    head = insertAtFirst(head, 10);

    printf("\nLinked list after insertion at first:\n");
    linkedListTraversal(head);
   
    // head = insertAtIndex(head, 34, 1);
    // //  printf("\nLinked list after index insertion at first:\n");
    // linkedListTraversal(head);
    // head = insertAtEnd(head, 67);
    //   printf("\nLinked list after insertion at end:\n");
    // linkedListTraversal(head);
    
    // head = insertAtnode(head, second, 56);
    //   printf("\nLinked list after insertion at node:\n");
    // linkedListTraversal(head);
    
    return 0;
}
