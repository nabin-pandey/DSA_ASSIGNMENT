// Q1 WAP to check that the mathematical equation have equal number of paranthesis or not usinf stack.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100

struct Stack
{
    int top;
    char items[MAX];
};

char initStack(struct Stack *s)
{
    s->top = -1;
}

char push(struct Stack *s, char item)
{
    if (s->top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++(s->top)] = item;
}

bool isEmpty(struct Stack *s)
{
    return s->top == -1;
}

char pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow\n");
        return;
    }
    return s->items[(s->top)--];
}

bool firstCheck(char ch)
{
    return (ch == '(' || ch == '{' || ch == '[');
}

bool secondCheck(char ch)
{
    return (ch == ')' || ch == '}' || ch == ']');
}

bool checkMatch(char first, char second)
{
    return ((first == '(' && second == ')') ||
            (first == '{' && second == '}') ||
            (first == '[' && second == ']'));
}

bool checkEqual(char *expresssion)
{
    struct Stack bracketStack;
    initStack(&bracketStack);

    int len = strlen(expresssion);
    bool isBalanced = true;
    int i ;
    for ( i = 0; i < len; i++)
    {
        char currentExpression = expresssion[i];
        if (firstCheck(currentExpression))
        {
            push(&bracketStack, currentExpression);
        }
        else if (secondCheck(currentExpression))
        {
            if (isEmpty(&bracketStack))
            {
                isBalanced = false;
                break;
            }
            char poppedChar = pop(&bracketStack);
            if (!checkMatch(poppedChar, currentExpression))
            {
                isBalanced = false;
                break;
            }
        }
    }

    if (!isEmpty(&bracketStack))
    {
        isBalanced = false;
    }

    return isBalanced;
}

int main()
{

    char *expressions[] = {
        "a + (b - c) * (d",
        "m+ [a - b * (c + d * {m)]",
        "a + (b - c),"

    };

    int n = 3 , i;
    
    for ( i = 0; i < n; i++)
    {
        if (checkEqual(expressions[i]))
        {
            printf("The expression %s has balanced parentheses.\n", expressions[i]);
        }
        else
        {
            printf("The expression %s does not have balanced parentheses.\n", expressions[i]);
        }
    }
    return 0;
}
