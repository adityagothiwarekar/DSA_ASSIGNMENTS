#include <stdio.h>
#include <stdlib.h>
#define size 100

char exp[size], stack[size];
int top=-1;

void push(char item) {
    if (top == (size - 1))
        printf("Stack is full\n");

    else {
        top++;
        stack[top] = item;
    }
}

void pop() {
    if (top == -1)
        printf("Stack is empty\n");
    else
        top--;
}

int checkPair(char val1,char val2){
    return (( val1=='(' && val2==')' )||( val1=='[' && val2==']' )||( val1=='{' && val2=='}' ));
}

int checkBalanced(char expr[], int len){

    for (int i = 0; i < len; i++)  
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')  
        {  
          push(expr[i]); 
        } else {
            if (top == -1) 
                return 0;
            else if(checkPair(stack[top],expr[i]))
            {
                pop();
                continue;
            }
            return 0;
        }
    }    
    return 1; 

}

int main() {
    int i = 0;
    //Asking user to input equation
    printf("\nEnter equation : ");
    gets(exp);

    int len = strlen(exp);
    if(checkBalanced(exp, len)){
        printf("Equation is balanced");
    }else {
        printf("Equation is not Balanced"); 
    }

}
