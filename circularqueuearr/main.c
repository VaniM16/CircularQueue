#include<stdio.h>
# define MAX 5
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
void insert(int item)
{
if((front == 0 && rear == MAX-1) || (front == rear+1))
{
printf("\n Queue Overflow ");
return;
}
if(front == -1)
{
front = 0;
rear = 0;
}
else
{
if(rear == MAX-1)
rear = 0;
else
rear = rear+1;
}
cqueue_arr[rear] = item ;
}
void deletion()
{
if(front == -1)
{
printf("\n Queue Underflow");
return ;
}
printf("\n Element deleted from queue is : %d",cqueue_arr[front]);
if(front == rear)
{
front = -1;
rear=-1;
}
else
{
if(front == MAX-1)
front = 0;
else
front = front+1;
}
}
void display()
{
int front_pos = front,rear_pos = rear;
if(front == -1)
{
printf("\n Queue is empty");
return;
}
printf("\n Queue elements :");
if( front_pos <= rear_pos )
while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
else
{
while(front_pos <= MAX-1)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
front_pos = 0;
while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
}
}
int main()
{
int choice,item;
printf("Circular Queue Implementation Using Array");
printf("\n =========================================");
do
{
printf("\n \n  1.Insert");
printf("\n 2.Delete");
printf("\n 3.Display");
printf("\n 4.Quit");
printf("\n Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("\n Enter the element to insert in queue : ");
scanf("%d", &item);
insert(item);
break;
case 2 :
deletion();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("Wrong choice");
}
}while(choice!=4);
return 0;
}
