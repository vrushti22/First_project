#include <stdio.h>
#include <conio.h>
#define size 5
int queue[size];
int front = -1,rear = -1;



void Insert_front(){
	int a;
	if((rear+1)%size==front){
		printf("\nQueue Overflow..");
	}
	else{
		printf("\nEnter the value to be inserted :   ");
		scanf("%d",&a);
		if(front == -1){
            front = 0;
            rear = 0;
        }
		else if(front == 0){
            front = size-1;
		}
		else{
            front--;
		}
		queue[front] = a;
		printf("\nValue inserted..");
	}
}

void Insert_rear(){
	int a;
	if(front == (rear+1)%size){
		printf("\nQueue Overflow..");
	}
	else{
		printf("\nEnter the value to be inserted :   ");
		scanf("%d",&a);
		if(rear==-1){
		rear=front=0;
        }
        else{
            rear=(rear+1)%size;
        }
		queue[rear] = a;
		printf("\nValue inserted..");
	}
}

void Delete_front(){
	int a;
	if(front == -1){
		printf("\nQueue Underflow...");
	}
	else{
		a = queue[front];
		if(front==rear){
            front = rear = -1;
		}
		else{
         front=(front+1)%size;
		}
		printf("Deleted value is:   %d",a);
	}

}

void Delete_rear(){
	int a;
	if(front==-1){
		printf("\nQueue Underflow...");
	}
	else{
		a = queue[rear];
		if(front==rear){
            front = rear = -1;
		}
		else if(rear==0){
            rear = size-1;
		}
		else{
            rear--;
		}
		printf("Deleted value is:   %d",a);
	}

}

void Display(){
	int i;
	if(front == -1){
		printf("\n Queue is empty..");
	}
	else{
		for(i=front;i!=rear;i=(i+1)%size){
			printf("%d ",queue[i]);
		}
		printf("%d ",queue[i]);
	}
}

int main(){
	int x;
	char ch;
	do{
		printf("\n 1.Insert from front \n 2.Insert from rear\n 3.Delete from front\n 4.Delete from rear\n 5.Display\n 6.Exit\n");
		printf(" Enter your choice :   ");
		scanf("%d",&x);
		switch(x){
        case 1:
            Insert_front();
            break;
        case 2:
            Insert_rear();
            break;
        case 3:
        	Delete_front();
        	break;
        case 4:
        	Delete_rear();
        	break;
        case 5:
            Display();
            break;
        case 6:
            return 0;
        default:
            printf("\nPlease enter correct choice ..");
            return 0;

        }
        printf("\nEnter y to continue and n to exit :   ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch == 'y' || ch == 'Y');
    return 0;
	}

