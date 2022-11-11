//WAP TO PERFORM STACK OPERATIONS
#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[5];
int Size=5;
//DECLARING FUNCTIONS
void push();
void pop();
void display();
void peek();
//INITIALIZING MAIN FUNCTION
 
int main()
{
	int choice;
	//ASKING USER FOR INPUT
	while(1)  //USING INFINITE LOOP	
	{
	    printf("\n----Stack Operation---");
        printf("\n1. Push an element into the stack");
        printf("\n2. Pop out an element from the stack");
        printf("\n3. Display the stack elements");
	printf("\n4.peek");
        printf("\n5. Exit");
	    scanf("%d",&choice);
	    //USING SWITCH CASE TO PERFORM OPERATIONS
		
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: peek();
					break;
			case 5: exit(1);
			
			default: printf("\nwrong choice");
		}
	}
}
 //DEFINING PUSH FUCTION
void push()
{
	int x;
	
	if(top==Size-1)
	{
		printf("\nOverflow!!");
	}
	//INSERTING ELEMENT INTO THE STACK
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
	}
}
//DEFINING POP FUNCTION
 
void pop()
{
	if(top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",stack[top]);
		top--;
	}
}
 //DEFINING DISPLAY FUNCTION
void display()
{
	
	
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
void peak()
{
 printf("%d",stack[top]);
}
