#include<stdio.h>
void main()
{
float a,b;
char operator;
printf("enter any simple arithmetic experssion:\n");
scanf("%f%c%f",&a,&operator,&b);
switch(operator)
{
	case '+':printf("sum=%f\n",a+b);
	         break;
	case '-':printf("difference=%f\n",a-b);
	         break;
	default: printf("invalid input\n");		          
}
}
