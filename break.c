#include<stdio.h>
void main()
{
	int a;
	printf("enter the vlue of a:");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("your choice is 1");
		        break;
		case 2: printf("your choice is 2");
		        break;
		default:printf("invalid input");        
	}
}
