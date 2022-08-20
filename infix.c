//WAP TO CONVERT POSTFIX TO INFIX
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 20

char stack[size];

int top = -1;

void push(char);
char pop();


//main function
int main()
{
    char infix[25], postfix[25];
    int len, i, j;
    j = -1;

    
    printf("Enter a Infix Expression : ");
    scanf("%s", infix);

    
    len = strlen(infix);

    
    for(i = 0; i < len; i++)
    {
        if(infix[i] >=  '0' && infix[i] <= '9')
        {
            postfix[++j] = infix[i];
        } else {
            if(infix[i] == '(')
            {
                push(infix[i]);
            }
            if(infix[i] == ')')
            {
                char ch = '/';
                while(ch != '(')
                {
                    ch = pop();
                    if(ch != '(')
                    {
                        postfix[++j] = ch;
                    }
                    
                }
            }
            if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/')
            {
                char y;
                y = stack[top];
                if(top == -1 || y == '(' || y < infix[i])
                {
                    push(infix[i]);
                }
                if(y >= infix[i])
                {
                    postfix[j] = pop();
                    push(infix[i]);
                }
            }
        }
    }
    

    
    while(top != -1)
    {
        postfix[++j] = pop();
    }

    
    printf("postfix exp : %s\n", postfix);

    return 0;
}



//FUNCTION TO PUSH THE EXPRESSION
void push(char ch)
{
    if(top==size-1)
    {
        // stack overflow condition
        printf("Stack is Full!\n");
    } else {
        stack[++top] = ch;
    }
}



//FUNCTION TO POP OPERATORS AND NUMBERS OF THE EXPRESSION
char pop()
{
    if(top == -1)
    {
        printf("Stack is Empty!\n");
    } else {
        return stack[top--];
    }
}