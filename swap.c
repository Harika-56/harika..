#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("enter two values a and b\n");
	scanf("%d %d",&a,&b);
	printf("before swapping");
	swap(&a,&b);
	printf("after swapping");
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}	
