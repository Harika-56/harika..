#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter a data");
	scanf("%d",&data);
	printf("enter bit position");
	scanf("%d",&bit);
	if((data>>bit)&1)
	{
	printf("msb bit is set");
	}
	else
	{
	printf("msb bit is unset");
	}
}	
