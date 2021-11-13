#include<stdio.h>
#include<conio.h>

#define n 5
	int top=-1,s[n]; //top is a pointer and save values of index
	void push();
	void pop();
	void peek();
	void display();
	void search();
	void peep();
	void change();
void main()
{
	int ch;
	while(1)
	{
		printf("\n\nStack Menu:\n\n1.Push \n2.Pop \n3.Peek \n4.Display or traverse \n5.Search \n6.Peep \n7.Change \n\nEnter your choice:");
		scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			push();
			break;
			
		case 2:
			pop();
			break;
			
		case 3:
			peek();
			break;
			
		case 4:
			display();
			break;
			
		case 5:
			search();
			break;
			
		case 6:
			peep();
			break;
			
		case 7:
			change();
			break;
	}
}
}

void push()
{
	int val;
	if(top==n-1)
	printf("\nStack is Overflow");
	else
	{
		printf("\nEnter element to push");
		scanf("%d",&val);
		top=top+1;
		s[top]=val;
	}
	display();
	
}

void pop()
{
	if(top==-1)
	printf("\nStack is underflow");
	else
	{
		printf("\nDeleted element is %d",s[top]);
		top=top-1;
	}
}
void peek()
{
	if(top==-1)
	printf("\nStack is underflow");
	else
	{
		printf("\nPeek or top element of the stack is:%d",s[top]);
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("\nStack is underflow");
	}
	else
	{
		printf("\n stack is:");
		for(i=top; i>=0; i--)
		{
			printf("\n %d",s[i]);
		}
	}
	
}

void search()
{
	int i,search,pos=-1;
	if(top==-1)
	{
		printf("\nStack is underflow");
	}
	else
	{
		printf("Enter the element you want to search:");
		scanf("%d",&search);
		for(i=0; i<=top; i++)
		{
			if(search==s[i])
			{
				pos=i+1;
				break;
			}
		}
		if(pos==-1)
		{
			printf("Element not found");
		}
		else
		{
			printf("Element found at position:%d",pos);	
		}	
			
	}
}
void peep()
{
	int i;
	printf("Enter positon for search:");
	scanf("%d",&i);
	if(top-i<=-1)
	{
		printf("Stack is underflow");
	}
	else
	{
		printf("The element is:%d",s[top-i+1]);
	}
}
void change()
{
	int i1,i2;
	printf("Enter position for change element:");
	scanf("%d",&i1);
	printf("Enter number for update:");
	scanf("%d",&i2);
	if(top-i1<=-1)
	{
		printf("Stack is underflow");
	}
	else
	{
		s[top-i1+1]=i2;
		printf("Update successfully");
	}
	display();
}

