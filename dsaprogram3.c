//WAP TO COMAPRE AARAYS
#include <stdio.h>
//DECLARING A FUNCTION TO READ ARRAY

void readarray(int arr[])
{
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("enter elements of array[ %d]",i);
        scanf("%d",&arr[i]);
    }
}
DECLARING A FUNCTION TO COMPARE ARRAY
int comparearray(int a[],int b[])
{
    int i;
    for(i=0;i<5;i++)
    {
	//CONDITIONS
        if(a[i]=b[i])
        return 1;
    
    }
    return 0;
}
//DECLARING MAIN
int main()
{
    int a[5],b[5];
    readarray(a);
    readarray(b);
    //GIVING OUTPUT TO THE USERS OF THE ARRAY
    if(comparearray(a,b)==1)
    {
        printf("array have same elements");
        
    }
    else
    {
        printf("array have different elements");
    }
    return 0;
}