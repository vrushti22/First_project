#include<stdio.h>
#include<conio.h>

struct library
{
	int book_id;
	char book_title[50];
	char authour[50];
	int total_copies;
	int available_copies;
}data[5];

void display(int r)
{
	int i;
	printf("All the records of library:\n");
	printf("-----------------------------------------------------\n");
	printf("Book_ID\tBook_title\tAuthour\tTotal_copies\tAvailable_copies\n");
	printf("-----------------------------------------------------\n");
	for(i=0;i<r;i++)
	{
		printf("%d\t%s\t%s\t%d\t%d\n",data[i].book_id,data[i].book_title,data[i].authour,data[i].total_copies,data[i].available_copies);
	}
 } 
 
 void available_books(int r)
 {
 	int i;
 	printf("Available books in library:\n");
 	printf("-----------------------------\n");
 	printf("Book_ID\tBook_title\tAvailable_copies\n");
 	printf("-------------------------------------\n");
 	for(i=0;i<r;i++)
 	{
 		if(data[i].available_copies>0)
 		{
 			printf("%d\t%s\t%d\n",data[i].book_id,data[i].book_title,data[i].available_copies);
		 }
	 }
 }
 
 void status(int r)
 {
 	int i,id;
 	printf("Enter book id for search the status:\n");
 	scanf("%d",&id);
 	printf("---------------------------------\n");
 	for(i=0;i<r;i++)
 	{
 		if(data[i].book_id==id)
 		{
 			if(data[i].available_copies>0)
 				printf("Book is available");
 			else
 				printf("Book is not available");
		 }
	 }
 	
 }

int main()
{
	int i,n,ch;
	printf("How many records you want to add:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter details of library books:%d",i+1);
		printf("\n");
		printf("Enter book ID:");
		scanf("%d",&data[i].book_id);
		printf("Enter book title:");
		scanf("%s",&data[i].book_title);
		printf("Enter authour of book :");
		scanf("%s",&data[i].authour);
		printf("Enter total copies of book:");
		scanf("%d",&data[i].total_copies);
		printf("Enter available copies of book:");
		scanf("%d",&data[i].available_copies);
	}
	while(1)
	{
		printf("\nMenu");
		printf("\n 1.Display all data of library \n 2.Display available books of library \n 3.Enter your book id and check availability status \n 4.Exit");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
				display(n);
				break;
			case 2: 
				available_books(n);
				break;
			case 3:
				status(n);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
	
}
