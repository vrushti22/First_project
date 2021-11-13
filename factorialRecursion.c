#include<stdio.h>
#include<conio.h>

int fact(n)
{
	if(n==1)
		return 1;
	else
		return(n*fact(n-1));
}

void main()
{
	int a,b;
	printf("Enter number for which you want factorial: ");
	scanf("%d",&a);
	
	b=fact(a);
	printf("Factorial of %d is:%d",a,b);
}
