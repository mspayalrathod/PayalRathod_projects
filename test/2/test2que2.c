//positive negative zero

#include<stdio.h>
int main()
{
	int no;
	printf("enter the no :");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("no is positive");
	}
	else if(no<0)
	{
		printf("no is negative");
	}
	else if(no==0)
	{
		printf("no is neutral");
	}
	else
	{
		printf("invalid input");
	}
}