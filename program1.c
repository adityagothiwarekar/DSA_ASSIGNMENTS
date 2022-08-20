#include <stdio.h>

int main() {
    int i=0,j=1,k,num;
    printf("enter the number");
    scanf("%d",&num);
    if(num==0||num==1)
    {
        printf("number is a fibonacci number");
    }
    else
    {
        k=i+j;
    }
    while(k<num)
    {
        i=j;
        j=k;
        k=i+j;
    }
    if(k==num)
    {
        printf("number is a fibonacci number");
    }
    else
    {
        printf("number is not a fibonacci number");
    }
    return 0;
}