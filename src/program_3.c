// Reversally traverse a singly linked list and print its elements in reverse order

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Create a new node
struct Node *make(int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Memory error\n");
        exit(1);
    }
    n->data = value;
    n->next = NULL;
    return n;
}

// Add node to the end of the list
void add(struct Node **head, int value)
{
    struct Node *n = make(value);

    if (*head == NULL)
    {
        *head = n;
        return;
    }

    struct Node *p = *head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = n;
}

// Print original order
void print(struct Node *head)
{
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

// Print reverse order
void reversePrint(struct Node *head)
{
    if (head == NULL)
    {
        return;
    }
    reversePrint(head->next);
    printf("%d ", head->data);
}

void clear(struct Node *head)
{
    struct Node *t;
    while (head != NULL)
    {
        t = head;
        head = head->next;
        free(t);
    }
}

int main()
{
    struct Node *head = NULL;

    add(&head, 5);
    add(&head, 15);
    add(&head, 25);
    add(&head, 35);

    printf("Original order: ");
    print(head);
    printf("\n");

    printf("Reverse traversal: ");
    reversePrint(head);
    printf("\n");

    clear(head);
    return 0;
}