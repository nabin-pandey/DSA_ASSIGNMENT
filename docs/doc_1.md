 ## question 1 : to check the mathematical paranthesis in the given equation.

# 1. Introduction 
In this program, it is written to check the equal number of the paranthesis exist or not in the given equation.

 There are three paranthesis considered are : 
 i. Small Bracket : ()
 ii. Curly Bracket :  {}
 iii. Square Bracket : []

 ## 2. Data Structure Definition

Stack follows the LIFO (Last In First Out) principle. 

 ### Stack Structure 

 struct Stack {
    int top ; 
    char items[MAX]
 };

 Usage :
 top : It stores the index of the top elements of the stack. 
 items : It is an array used to store opening parantheses.

3. Main Function Descriptions

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

4. main() Function :
I have inserted the expression in the form of the array. Each expression is passed into the checkEqual() function. After the checkEqual() evaluation and  the result is printed indicated whether paranthesis are balanced or not. 



