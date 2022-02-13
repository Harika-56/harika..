#include<stdio.h>
int main()
{
	int radius;
	float c,area,pi=3.14;
	printf("enter radius of circle");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("area of circle:%f\n",area);
	c=2*pi*radius;
	printf("circumference of circle is:%f\n",c);
}	

