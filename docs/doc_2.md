# Q2 Infix to Postfix Conversion

## a. Introduction 

This program demonstrate the conversion of the expression of the infix to prefix expression. This program is solved by using stack method.

## b. Data Structure Defined 

### Stack Structure 

typedef struct { <br>
    char items[MAX];    <br>
    int top ;           <br>
}Stack ;                 <br>


Stack follows the LIFO Principle

## c. Function Implemented 

**initStack(Stack * s)**
Initializes the stack by setting top to -1 (empty stack).


**isFull(Stack * s)**
Checks whether the stack is full (top == MAX - 1). Returns 1 if full, else 0.


<<<<<<< HEAD
** isEmpty(Stack *s) **
Checks whether the stack is empty (top == -1). Returns 1 if empty, else 0.


** push(Stack *s, char item) **
Pushes (inserts) a character onto the stack if the stack is not full.


** pop(Stack *s) **
=======
**isEmpty(Stack * s)**
Checks whether the stack is empty (top == -1). Returns 1 if empty, else 0.


**push(Stack * s, char item)**
Pushes (inserts) a character onto the stack if the stack is not full.


**pop(Stack * s)**
>>>>>>> 17755602c21123472fc9c74dc5c5cce257029918
Pops (removes and returns) the top character from the stack if not empty; otherwise returns '\0'.


** precedence(char ch) **
Returns the precedence (priority) of arithmetic operators:


** isOperator(char ch) **
Checks if a character is an operator. Returns 1 if yes, else 0.


<<<<<<< HEAD
** convert(const char *infix, char *postfix) **
=======
**convert(const char * infix, char * postfix)**
>>>>>>> 17755602c21123472fc9c74dc5c5cce257029918
    - Converts an infix expression to a postfix expression using a stack:
    - Outputs operands directly to postfix
    - Uses stack to manage operators and parentheses based on precedence
    - Pops remaining operators at the end and terminates postfix with '\0'

 ## d. Main Function

 1. Program ask for the input from the user.
 2. Inputs get read using fgets() .
 3. Call convert() function.
 4. Further operation is evaluated within the function and return the answer that was computed.  
 5. Display the result of the provided  infix expression into postfix expression.

 ## e. Sample Output
 Enter an infix expression: a+b*(c-d)  
 Postfix expression: abcd-*+





