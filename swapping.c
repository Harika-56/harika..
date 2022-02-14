#includse<stdio.h>
void swap(int *x,int *y);
{
	int x,y;
	printf("enter x and y values:");
	scanf("%d %d",&x,&y);
	printf("before swapping %d %d",a,b);
	swap(&x,&y);
	printf("after swapping %d %d",a,b);
}
void swap(int *x,int *y) 
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
