#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty()
{
    return top == NULL;
}

struct Node *push(int x)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Memory allocation failed\n");
        return top;
    }

    n->data = x;
    n->next = top;
    top = n;
    return top;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return -1; // Or any other value to indicate underflow
    }

    struct Node *n = top;
    top = top->next;
    int data = n->data;
    free(n);
    return data;
}

int peekAtPosition(int pos)
{
    struct Node *ptr = top;
    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }

    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1; // Or any other value to indicate invalid position
    }
}

int main()
{
    top = push(28);
    top = push(18);
    top = push(15);
    top = push(7);

    linkedListTraversal(top);

    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is : %d\n", i, peekAtPosition(i));
    }

    return 0;
}
