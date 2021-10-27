#include<stdio.h>
void main()
{
	int marks;
	printf("enter the marks of the students:");
	scanf("%d",&marks);
	if(marks<80)
	{
		printf("your grade is A");
	}
	else
	{
		printf("your grade is B");
	}
}
