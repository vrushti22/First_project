#include<stdio.h>
#include<conio.h>

#define MAX 5

void enqueue();
void dequeue();
void display();
int rear=-1;
int front=-1;
int q[MAX];

main()
{
	int c;
	while(1)
	{
	printf("\nChoices of operation:\n 1.Enqueue(Insert) \n 2.Dequeue(Delete) \n 3.Display");
	printf("\nEnter your choice:");
	scanf("%d",&c);

	switch(c)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
	}
}
}

void enqueue()
{
	int val;
	if(rear==MAX-1)
		printf("Queue is overflow");
	else
	{
		if(front==-1)
		front=0;
		printf("Enter value for insert:");
		scanf("%d",&val);
		rear=rear+1;
		q[rear]=val;
	}
	display();
		
}
void dequeue()
{
	if(front==-1 && rear==-1)
		printf("Queue is underflow");
	else if(rear==front)
	{
		rear=-1;
		front=-1;
	}
	else
	{
		printf("\nDeleted element is:%d",q[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("Queue is empty");
	else
	{
		printf("Queue is:");
		printf("\n");
		for(i=front;i<=rear;i++)
			printf("%d",q[i]);
	}
		printf("\n");
}

