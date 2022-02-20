#include<stdio.h>
#include<stdlib.h>

struct Queue
{
	int data;
	struct Queue *link;
};

struct Queue *front,*rear;

void Enq(int);
int Deq();
int main()
{
	int val,choice;

	while(1)
	{
		printf("1.Enq 2.Deq 3.exit\n:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");
				scanf("%d",&val);
				Enq(val);
				break;
			case 2: if(front==NULL)
					printf("Queue is empty\n");
				else
					printf("Data dequed is %d\n",Deq());
				break;
			case 3: exit(0);
		}
	}
}

void Enq(int d)
{
struct Queue *newnode=NULL;
newnode=calloc(1,sizeof(struct Queue));
if(newnode==NULL)
{
	printf("Node not created\n");
}
else
{
	newnode->data=d;
	if(front==NULL) 
		front=newnode;
	else
		rear->link=newnode;
	rear=newnode;
}
}
int Deq()
{	int d;
	struct Queue *temp=NULL;
	temp=front;
	d=temp->data;
	front=front->link;
	if(front==NULL)
		rear=NULL;
	free(temp);
	temp=NULL;
	return d;
}

