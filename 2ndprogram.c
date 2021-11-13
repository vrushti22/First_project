#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5][4],i,j,sum=0,csum=0,psum=0;
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter the number of products=%d sold by the City=%d :\n",j+1,i+1);
			scanf("%d",&a[i][j]);
		}
	}
	

	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			sum+=a[i][j];
			csum+=a[i][j];
		}
		printf("\nCity wise total sale %d",csum);
		csum=0;
	}
	printf("\ntotal sale %d",sum);
	for(j=0;j<4;j++)
	{
		for(i=0;i<5;i++)
		{
			psum+=a[i][j];
		}
		printf("\nproduct wise sum %d",psum);
		psum=0;
	}
	return 0;
}
