#include<stdio.h>
#include<conio.h>

#define size 10

int a[size];
int top1=-1;
int top2=size;
void push_stack1();
void push_stack2();
void pop_stack1();
void pop_stack2();

void main()
{
	int a[size];
	int i;
	int num_of_ele;
	
	for(i=1; i<=6; i++)
	{
		push_stack1(i);
		printf("value pushed in stack 1 is:%d\n",i);
	}
	for(i=1; i<=4; i++)
	{
		push_stack1(i);
		printf("value pushed in stack 2 is:%d\n",i);
	}
	print_stack1();
	print_stack2();
}
