#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100],ch;
	char per;
	do
	{
		printf("1.Insert \n 2.Update \n 3.Delete \n 4.Display \n 5.Exit");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				insert(a);
				getch();
				break;
			case 2:
				update(a);
				getch();
				break;
			case 3: 
				delete(a);
				getch();
				break;
			case 4:
				display(a);
				getch();
				break;
			case 5:	
				exit(0);
				
		}
	
		printf("Do you want to continueue:(Y/N)");
		scanf("%d",&per);
		
	}while(per=='y' || per=='Y');

		return 0;
}
int insert(int *a)
{
	int i,n;
	printf("Enter the no. of elements you wnat to insert");
	scanf("%d",&n);
	printf("Enter %d in array: ",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("After insertion:a[%d]=%d",i,a[i]);
	}
	a[i]='\0';
	return *a;
}
int update(int *a)
{
	int i,n,pos;
	printf("Enter position to update");
	scanf("%d",&pos);
	
	printf("Enter no. of updation at this position");
	scanf("%d",&n);
	
	a[pos-1]=n;
	
	for(i=0; i<n; i++)
	{
		printf("After Updation:a[%d]=%d",i,a[i]);
	}
	return *a;
}
int delete(int *a)
{
	int c,k,pos;
	for(k=0; a[k]!=NULL; k++)
	{
		printf("Enter position for deleting element");
		scanf("%d",&pos);
		if(pos<=k)
		{
			for(c=pos-1; c<k-1; c++)
			{
				a[c]=a[c+1];
			}
			
			printf("Array after deletion:");
			
			for(c=0;c<k-1; c++)
			{
				printf("%d",a[c]);
			}
		}
	}
	return *a;
}
int display(int *a)
{
	int j;
	for(j=0; a[j]!=NULL; j++)
	{
		printf("Element of array=%d",a[j]);
	}
	return *a;
}
