
## Q4. Doubly Linked List: Insert After a Given Node and Delete a Node (C)

### a. Introduction
A doubly linked list is a linear data structure made of nodes where each node stores three parts: data, a pointer to the next node, and a pointer to the previous node. Because each node has both next and previous links, traversal can be done in both directions.

This program is written to demonstrate how a doubly linked list can be implemented using structures in C, and how to perform two common operations:
1. Insert a new node after a given node.
2. Delete a node from the list.

### b. Data Structure Definition
The program defines a node using a structure:

- data: stores the integer value of the node
- prev: points to the previous node
- next: points to the next node

The list is accessed using a pointer called head, which stores the address of the first node. If head is NULL, the list is empty.

### c. Functions Implemented and Their Purpose

- makeNode(int value)  
  This function ensures that it creates a new node using malloc, assigns value to data, sets prev and next to NULL, and returns the new node pointer.

- addEnd(struct Node **head, int value)  
  To inserts a new node at the end of the doubly linked list. If the list is empty, it makes the new node the head.

- printForward(struct Node *head)  
  It ensure that prints the list in forward direction starting from head until NULL.

- search(struct Node *head, int key)  
  this function will finds the first node whose data matches key and returns its address. If not found, returns NULL.

- insertAfter(struct Node **head, int afterValue, int newValue)  
This work in the following manner
  Inserts a new node with newValue after the node whose value is afterValue.
  Returns 1 if insertion is successful, otherwise returns 0 (node not found or list empty).

- deleteNode(struct Node **head, int key)  
The function shows the following working behaviour  
  Deletes the node whose value is key.
  Handles all cases: deleting head node, middle node, or last node.
  Returns 1 if delete is successful, otherwise returns 0 (node not found or list empty).

- clearList(struct Node **head)  
  It frees all nodes of the linked list and sets head to NULL.

###  d. Overview of main() Organization
The main() function is organized like this:

1. Creates an empty list (head = NULL).
2. Inserts some nodes at the end to form an initial list.
3. Prints the initial list.
4. Inserts a value after a given value using insertAfter() and prints the list.
5. Deletes a node using deleteNode() and prints the list again.
6. Frees all allocated memory using clearList() before ending the program.

### e.Sample Output 