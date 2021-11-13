#include<stdio.h>
#include<conio.h>
int toh(int a,char from_rod,char to_rod,char extra_rod)
{
	if(a==1)
	{
		printf("\nMove disk 1 from %c to %c",from_rod,to_rod);
		return;
	}
	
		toh(a-1,from_rod,extra_rod,to_rod);
		printf("\nMove disk %d from %c to %c",a,from_rod,to_rod);
	
	toh(a-1,extra_rod,to_rod,from_rod);
}
void main()
{
	int n;
	printf("Enter no. of disks you want to transfer:");
	scanf("%d",&n);
	
	toh(n,'A','B','C');
	
}
