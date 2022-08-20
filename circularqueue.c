//WAP FOR CIRCULAR QUEUE
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

//DECLARATION OF VARIABLES
int cq[size];
int front=0,rear=0;
//FUNCTION TO PRINT THE QUEUE
void display()
{
 int i;
 printf("\n The circular queue is : ");
 if(front<=rear)
 {
  for(i=front;i<=rear;i++)
   printf(" %d ",cq[i]);
 }
 else
 {
  for(i=front;i<=size;i++)
   printf(" %d ",cq[i]);
  for(i=1;i<=rear;i++)
   printf(" %d ",cq[i]);
 }
}
//FUNCTION TO ENQUEUE AN ELEMENT
void enq(int item)
{
 if(front==((rear%size)+1))//CONDITION FOR QUEUE IS FULL
  printf("\n Queue is full");
 else
 {
  if(front==0)
  {
   front=rear=1;
   cq[rear]=item;
  }
  else
  {
   int next=(rear%size)+1;
   if(next!=front)
   {
    rear=next;
    cq[rear]=item;
   }
  }
 }
 display();
}
//FUNCTION TO DELETE ELEMENT FROM QUEUE
void deq()
{
 if(front==0)
  printf("\n Queue is empty");//CONDITION FOR EMPTY QUEUE
 else
 {
  int item=cq[front];
  if(front==rear)
   front=rear=0;
  else
   front=(front%size)+1;
  printf("\n Deleted %d",item);
 }
 display();
}
void main()
{
 int item,m; 
 printf("\n\t\tCIRCULAR QUEUE");
 while(1)
 {
  printf("\n\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit");
  printf("\n Enter your choice : ");
  scanf("%d",&m);
  switch(m)
  {
   case 1 :if(front==((rear%size)+1))
	          printf("\n Queue if full");
	  	 else
	        {
	          printf("\n Enter the item to be enqueued : ");
	          scanf("%d",&item);
	           enq(item);
	         }
	         break;
   case 2 :deq();break;
   case 3 :display();break;
   case 4 :exit(1);
   default:printf("\n Invalid entry");
  }
 }
}