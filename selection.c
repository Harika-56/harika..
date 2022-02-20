#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 100

void Input(int *);
void Display(int *);
void Selection(int *);
int main()
{
	int a[MAX];
	Input(a);
	Display(a);
	Selection(a);
	printf("After sorting\n");
	Display(a);
}

void Input(int *p)
{
	int i;
	srand(getpid());
	for(i=0;i<MAX;i++)
		p[i]=rand()%1000;
}

void Display(int *p)
{
	int i;
	for(i=0;i<MAX;i++)
		printf("%d ",p[i]);
	printf("\n");
}

void Selection(int *p)
{
	int i,j,temp;
	for(i=0;i<MAX-1;i++)
	{
		for(j=i+1;j<MAX;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}

