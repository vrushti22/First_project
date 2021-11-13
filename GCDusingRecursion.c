#include<stdio.h>
#include<conio.h>

int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	else if(a<b)
		return gcd(b,a);
	else
		return gcd(b,a%b);
}

void main()
{
	int m,n,ans;
	printf("Enter 2 values for which you want to find GCD:");
	scanf("%d %d",&m,&n);
	
	ans=gcd(m,n);
	printf("GCD of your numbers %d and %d is:%d",m,n,ans);
}
