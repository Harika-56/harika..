#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter a data");
	scanf("%d",&data);
	printf("enter bit position");
	scanf("%d",&position);
	if((data>>0)&1)
	{
	printf("LSB is set");
	}
else
{
	printf("LSB is unset");
}	







