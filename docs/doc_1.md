 ## Question 1 : To check the mathematical paranthesis in the given equation.

# a. Introduction 
In this program, it is written to check the equal number of the paranthesis exist or not in the given equation.

 There are three paranthesis considered are : 
 i. Small Bracket : ()
 ii. Curly Bracket :  {}
 iii. Square Bracket : []

 ## b. Data Structure Definition

Stack follows the LIFO (Last In First Out) principle. 

 ### Stack Structure 

 struct Stack {
    int top ; 
    char items[MAX]
 };

 Usage :
 top : It stores the index of the top elements of the stack. 
 items : It is an array used to store opening parantheses.

## c. Main Function Descriptions

initStack() : Initialize the stack by setting my top to -1 which indicates an empty stack. 

push() : It removes return the top element of the stack, before removal it checks .

isEmpty() : This function checks whether the stack is empty or not.

firstCheck() : Checks if a character is an opening bracket : ( , { , [

secondCheck() : Checks if a character is an closing braces : ) , } , ]

checkMatch() : 
This function verifies wheter an opening bracket matches the corresponding closing bracket. 

checkEqual() : 
This is the core function of the program :
i. Expression gets travesed character by character.
ii. Pushes opening brackets onto the stack. 
iii. Pop the bracket and matches bracket when a closing bracket is found.
iv. If any mismatch or imbalance seems, the function return -1 as false.
v. If the stack is empty at the end, it returns true. 

## d. main() Function :

1. There are three expression pre-defined in the form of the array in the beginning of the main function.
2. The expression are further passed as arguments into the checkEqual() to be checked.
3. The equation iterates via for loop.
4. Receive boolean result showing that the brackets are balanced or not.
5. Based on the result the output is displayed and the program is terminated.


## e. Sample Output 

Using the expressions already written in the main functiin:

1. `a + (b - c) * (d`
2. `m+ [a - b * (c + d * {m)]`
3. `a + (b - c),`

The output will be:

The expression a + (b - c) * (d does not have balanced parentheses.  
The expression m+ [a - b * (c + d * {m)] does not have balanced parentheses.  
The expression a + (b - c), has balanced parentheses.



