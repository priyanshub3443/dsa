#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *head) {
    struct node *ptr = head;

    do {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertionAtFirst(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;

    while (p->next != head) {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main() {
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
    third->next = head;

    printf("Original linked list:\n");
    linkedListTraversal(head);

    head = insertionAtFirst(head, 5);

    printf("\nLinked list after insertion at first:\n");
    linkedListTraversal(head);

    return 0;
}
