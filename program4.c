// WAP to sort data in descending order of percentage
#include<stdio.h>

//initializing the structure
struct Student 
{
	int roll_no;
	char name[50];
	float percentage;
};

int main()
{
	struct Student s[5];
	struct Student temp;
	int i, j; 
	
	//Taking Input from user
	for(i = 0; i < 5; i++)
	{
		printf("Enter Student%d Roll Number, Name and Percentage : ", i+1);
		scanf("%d%s%f", &s[i].roll_no,s[i].name,&s[i].percentage);
	    
	}
	
	// Sorting data in decreasing order of percentage
	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if(s[j].percentage > s[i].percentage) 
			{
				// swapping percentage
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}	
	
	// displaying sorted data 
	for(i = 0; i < 5; i++)
	{
		printf("Roll Number : %d\n", s[i].roll_no);
		printf("Name : %s\n", s[i].name);
		printf("Percentage : %f\n", s[i].percentage);
		printf("\n");
	}
	
	return 0;
}