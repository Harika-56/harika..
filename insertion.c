#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 500

void Input(int *);
void Display(int *);
void Insertion(int *);
int main()
{
	int a[MAX];
	Input(a);
	Display(a);
	Insertion(a);
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
}

void Insertion(int *p)
{
	int i,j,temp;
	for(i=1;i<MAX;i++)
	{
		j=i-1;  
		temp=p[i]; 
		
		while(j>=0 && temp<p[j])
		{
			p[j+1]=p[j];  
			j--;
		}
	
		p[j+1]=temp;
	}
}

