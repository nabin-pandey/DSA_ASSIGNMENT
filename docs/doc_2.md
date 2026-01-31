#Q2 Infix to Postfix Conversion

## 1. Data Structure Defined 

### Stack Structure 

typedef struct {
    char items[MAX];
    int top ;
}Stack ; 

Stack follows the LIFO Principle

## 2. Function Implemented 

### Stack Function
int isEmpty() : 
This function checks that the stack is empty or not. 

int isFull():
This function checks if the stack is full or not.

char pop () : 
It removes and returns the top elements from the stack. 

char peek() :
This returns the top element without removing it .

### Conversion Function 

int precedence() : 
This function purpose is to determine the precedence level of an operator. 

int isOperator() : 
This function checks whether the character inserted by the user is valid operator or not. 

void convert() : 
 This function converts an infix expression to postfix notation. 

 i. Empty stack is intialized. 
 ii. Iterate through the each character in the infix expression and perform the designed solution. 


 ### Main Function

 i. Program ask for the input from the user.
 ii. Inputs get read using fgets() .
 iii. Call convert() function
 iv. Display rhe infix expression and postfix operation after the evaluation of the input expression.


