#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// DMA for new node
struct Node *makeNode(int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    n->data = value;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

// Add node at the end of the list
void addEnd(struct Node **head, int value)
{
    struct Node *n = makeNode(value);

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
    n->prev = p;
}

// Print list in forward pattern of the list
void printForward(struct Node *head)
{
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// Insert a new node after a given node as given by user
void insertAfterNode(struct Node *given, int value)
{
    if (given == NULL)
        return;

    struct Node *n = makeNode(value);

    n->next = given->next;
    n->prev = given;

    if (given->next != NULL)
    {
        given->next->prev = n;
    }
    given->next = n;
}

// Delete given node from the list
void deleteGivenNode(struct Node **head, struct Node *del)
{
    if (*head == NULL || del == NULL)
        return;

    if (del == *head)
    {
        *head = del->next;
    }

    if (del->prev != NULL)
    {
        del->prev->next = del->next;
    }

    if (del->next != NULL)
    {
        del->next->prev = del->prev;
    }

    free(del);
}

// Clear list and free memory
void clearList(struct Node **head)
{
    struct Node *p = *head;
    while (p != NULL)
    {
        struct Node *t = p;
        p = p->next;
        free(t);
    }
    *head = NULL;
}

int main()
{
    struct Node *head = NULL;

    addEnd(&head, 10);
    addEnd(&head, 20);
    addEnd(&head, 30);

    printf("Initial list: ");
    printForward(head);

    struct Node *given = head->next;
    insertAfterNode(given, 25);

    printf("After insert: ");
    printForward(head);

    struct Node *toDelete = head;
    deleteGivenNode(&head, toDelete);

    printf("After delete: ");
    printForward(head);

    clearList(&head);
    return 0;
}