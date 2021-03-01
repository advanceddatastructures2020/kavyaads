#include<stdio.h>
#include<conio.h>
#define MAX 5
int cqueue_arr[MAX];
int front=-1;
int rear=-1;
void insert(int item)
{
	if((front==0 && rear==MAX-1) || (front == rear+1))
	{
		printf("queue overflow\n");
		return;
	}
	else if(front == -1)
	{
		front=0;
		rear=0;
	}
	else
	{
		if(rear==MAX-1)
		{
			rear=0;
		}
		else
		{
			rear=rear+1;
		}
	}
	cqueue_arr[rear]=item;
}

void deletion()
{
	if(front==-1)
	{
		printf("queue underflow\n");
		return;
	}
	printf("element deleted from queue is : %d ",cqueue_arr[front]);
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		if(front==MAX-1)
			front=0;
		else
			front+=1;
	}
}

void display()
{
	int front_pos=front,rear_pos=rear;
	if(front==-1)
	{
		printf("empty queue\n");
		return;
	}
	printf("queue elements are : ");
	if(front_pos<=rear_pos)
	{
		while(front_pos<=rear_pos)
		{
			printf("%d",cqueue_arr[front_pos]);
			front_pos++;
		}
	}
	else
	{
		while(front_pos<=MAX-1)
		{
			printf("%d",cqueue_arr[front_pos]);
			front_pos++;
		}
		front_pos=0;
		while(front_pos<=rear_pos)
		{
			printf("%d",cqueue_arr[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}

void main()
{
	int choice,item;
	clrscr();
	do
	{
		printf("\n 1.insert\n2.delete\n3.display\n4.quit\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("input the elements to queue :");
				scanf("%d",&item);
				insert(item);
				break;
			case 2:
				deletion();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);

			default:
				printf("invalid input !!");
			}
		}while(choice!=4);
	getch();
}