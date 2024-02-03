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

struct node * deletionAtFirst(struct node *head){
    struct node *ptr = head;

  head=head->next;
  free(ptr);
   
    return head;
}
struct node * deletionAtEnd(struct node *head){
    
     
     struct node * p =head;
     struct node * q =head->next;
    
     while (q->next!=NULL)
     {
        p=p->next;
        q=q->next;
     }
     
    p->next = NULL;
    free(q);
    return head;
}
struct node * deltionAtnode(struct node *head,struct node *prevnode){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
     ptr->data=data;
     ptr->next=prevnode->next;
     prevnode->next=ptr;
    return head;
}

struct node * deletionAtIndex(struct node *head,int index){
    
    struct node * p =head;
    struct node * q =head->next;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    
    p->next=q->next;
    free(q);
    return head;
    
}

int main(){
    
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 41;
    second->next = third;

    third->data = 56;
    third->next = forth;

    forth->data=67;
    forth->next=NULL;

    printf("Original linked list:\n");
    linkedListTraversal(head);

   
    // head = deletionAtFirst(head);

    // printf("\nLinked list after insertion at first:\n");
    // linkedListTraversal(head);
   
    head = deletionAtIndex(head, 1);
     printf("\nLinked list after index insertion at first:\n");
    linkedListTraversal(head);
    // head = deletionAtEnd(head);
    //   printf("\nLinked list after insertion at end:\n");
    // linkedListTraversal(head);
    
    // head = insertAtnode(head, second, 56);
    //   printf("\nLinked list after insertion at node:\n");
    // linkedListTraversal(head);
    
    return 0;
}
