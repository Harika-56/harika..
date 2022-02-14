#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter a data");
	scanf("%d",&data);
	printf("enter bit popsition");
	scanf("%d",&bit);
	if((data>>31)&1)
	{
	printf("MSB bit is set");
	}
	else
	{
	printf("MSB bit is unset");
	}
}	
