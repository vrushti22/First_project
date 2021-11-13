#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10][10],tra[10][10],r,c,i,j;
	printf("Enter the no. of rows and columns:");
	scanf("%d %d",&r,&c);
	
	printf("Enter matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Entered Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			tra[i][j]=a[j][i];
		}
	}
	
	printf("Transpose of a matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",tra[i][j]);
		
		
		}
			printf("\n");
	}
	return 0;
}
