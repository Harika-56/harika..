#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 1000000

void Input(int *);
void Display(int *);
void Quick(int *,int,int);
int Partition(int *,int,int);
int main()
{
	int a[MAX];
	Input(a);
	Display(a);
	Quick(a,0,MAX-1);
	printf("After sorting\n");
	Display(a);
}

void Input(int *p)
{
	int i;
	srand(getpid());
	for(i=0;i<MAX;i++)
		p[i]=rand()%100000;
}

void Display(int *p)
{
	int i;
	for(i=0;i<MAX;i++)
		printf("%d ",p[i]);
	printf("\n");
}



void Quick(int *p,int low,int high)
{
	int pindex;
	if(low < high) 
	{
		pindex=Partition(p,low,high);
		Quick(p,low,pindex-1);
		Quick(p,pindex+1,high);
	}
}

int Partition(int *p,int low,int high)
{
	int pivot,l,h,temp;
	pivot=p[low];
	l=low;
	h=high;
	while(l<h)
	{
		while(l<=high && p[l]<=pivot)
			l++;
		while(h>=low && p[h] > pivot)
			h--;

		if(l<h)
		{
			temp=p[l];
			p[l]=p[h];
			p[h]=temp;
		}
	}

	p[low]=p[h];
	p[h]=pivot;
	return h;
}

