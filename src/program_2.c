// Q2 Infix to Postfix Conversion using Stack

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct Stack
{
    int top;
    char items[MAX];
} Stack;

void initStack(Stack *s)
{
    s->top = -1;
}
int isFull(Stack *s)
{
    return s->top == MAX - 1;
}
int isEmpty(Stack *s)
{
    return s->top == -1;
}
void push(Stack *s, char item)
{
    if (!isFull(s))
    {
        s->items[++(s->top)] = item;
    }
}
char pop(Stack *s)
{
    if (!isEmpty(s))
    {
        return s->items[(s->top)--];
    }
    return '\0';
}

int precedence(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}

int isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

void convert(const char *infix, char *postfix)
{
    Stack s;
    initStack(&s);
    int i = 0, k = 0;
    while (infix[i] != '\0')
    {
        char currentChar = infix[i];
        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z') || (currentChar >= '0' && currentChar <= '9'))
        {
            postfix[k++] = currentChar;
        }
        else if (currentChar == '(')
        {
            push(&s, currentChar);
        }
        else if (currentChar == ')')
        {
            while (!isEmpty(&s) && s.items[s.top] != '(')
            {
                postfix[k++] = pop(&s);
            }
            pop(&s);
        }
        else if (isOperator(currentChar))
        {
            while (!isEmpty(&s) && precedence(s.items[s.top]) >= precedence(currentChar))
            {
                postfix[k++] = pop(&s);
            }
            push(&s, currentChar);
        }
        i++;
    }
    while (!isEmpty(&s))
    {
        postfix[k++] = pop(&s);
    }
    postfix[k] = '\0';
}
int main()
{
    char infix[MAX], postfix[MAX];
    printf("Enter an infix expression: ");
    fgets(infix, MAX, stdin);

    convert(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
