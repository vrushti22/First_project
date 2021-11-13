#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5]={1,2,3,4,5};
	int sum=0,i;
	
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		
	}
	
	printf("Sum of array elements are:%d",sum);
}
