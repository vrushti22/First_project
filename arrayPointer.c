#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5]={1,2,3,5,4},i,*p;
	p=&a;
	printf("a:%d \n",a);
	printf("a+1:%d \n",a+1);
	printf("a+2:%d \n",a+2);
	printf("*a=%d \n",*a);
	
	for(i=0; i<5; i++)
	{
		printf("a[%d]=%d \n",i,a[i]);
		printf("i[%d]=%d \n",a,i[a]);
		printf("*a+i=%d \n",*a+i);
		printf("*(a+i)=%d \n",*(a+i));
		printf("*(p+i)=%d \n",*(p+i));
		printf("p[%d]=%d \n",i,p[i]);
		printf("i[%d]=%d \n",p,i[p]);
	
	}
	
	
}
