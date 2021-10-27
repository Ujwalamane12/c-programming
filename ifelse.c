#include<stdio.h>
void main()
{
	char name[10];
	int units,mc=100;
	float bill;
	printf("enter the name:\n");
	scanf("%s",name);
	printf("enter the numbers of units consumed:\n");
	scanf("%d",&units);
	if(units<=200)
	bill=mc+(units*0.8);
	else if(units>200&&units<=300)
	bill=mc+(200*0.8)+((units-200)*0.9);
	else if(units>300)
	bill=mc+(200*0.8)+(100*0.9)+((units-300)*1);
	if(bill>=400)
	bill=bill+(bill*0.15);
	printf("%s has to pay %f amount\n",name,bill);
}
