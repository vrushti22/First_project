#include<stdio.h>
#include<conio.h>
int get_array(int *arr)
{
	int b[5]={3,5,10,9,4};
	return *b;
}
int main()
{
	int a[5]={6,2,4,1,5},*p,i;
	p=get_array(a);
	
	for(i=0;i<5;i++)
	{
		printf("p[i]=%d",i,p[i]);
	}
	return 0;
}
