# Q3 Reverse Traversal in Singly Linked List 

## a. Introduction  
A singly linked list is a linear dynamic data structure in which each element, called a node, contains two parts: data and a link (pointer) to the next node in the sequence. Unlike arrays, the nodes of a singly linked list are not stored in contiguous memory locations instead, they are connected using pointer.

## b. Data Structure Definition

This program uses a **singly linked list**.

A linked list is made of nodes. Each node stores:
- an integer value (`data`)
- a pointer to the next node (`next`)

The node structure is defined as:

- `data` holds the value of the node.
- `next` points to the next node in the list.
- the last node has `next = NULL`.

So the list starts from a pointer called `head`, which points to the first node.


## c. Functions Implemented

### 1. struct Node* make(int value)
**Purpose:**  
Creates a new node dynamically using `malloc`.

- allocates memory for one node
- stores `value` in `data`
- sets `next` to `NULL`
- returns the pointer to the new node

If memory allocation fails, it prints an error message and exits.


### 2. `void add(struct Node **head, int value)`
**Purpose:**  
Inserts a new node at the end of the linked list.

**What it does:**
- creates a new node using `make()`
- if the list is empty (`*head == NULL`), it sets head to the new node
- otherwise, it moves to the last node and connects the new node at the end


### 3. `void print(struct Node *head)`
**Purpose:**  
Prints the linked list in normal forward order.

**What it does:**
- starts from `head`
- prints each node’s data
- moves using `next` until `NULL`


### 4. `void reversePrint(struct Node *head)`
**Purpose:**  
Prints the linked list in reverse order (reverse traversal).

**How it works:**
- uses recursion
- first reaches the last node by repeatedly calling itself using `head->next`
- prints values while returning from recursion, which results in reverse order output

This does not modify the list. It only prints it in reverse.


### 5. `void clear(struct Node *head)`
**Purpose:**  
Frees all dynamically allocated memory used by the list.

**What it does:**
- moves through the list node by node
- frees each node to avoid memory leak


## d. Organization of `main()`

The main() function is organized in these steps:

1. Create an empty list using `head = NULL`.
2. Insert sample values into the list using `add()`.
3. Print the original list using `print()`.
4. Print the reverse traversal using `reversePrint()`.
5. Free memory using `clear()` before program ends.


## e. Sample Output (Complete Run)

When the program is run with these inserted values:

`5 15 25 35`

The output will be:

Original list: 5 15 25 35  
Reverse list: 35 25 15 5