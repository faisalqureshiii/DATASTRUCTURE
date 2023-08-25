#include<stdio.h>
#include<conio.h>
#define max 100

int queue[max], front=-1,rear=-1;
void insert(void);
void delete_element(void);
void peek(void);
void display(void);
int main() {
int option,val;
do{
printf("\n ****MAIN MENU****");
printf("\n 1.Insert an element");
printf("\n 2.Delete an element");
printf("\n 3.Peek");
printf("\n 4.Display");
printf("\n 5.EXIT");
printf("\n Enter your choice:");
scanf("%d",&option);
switch(option)
{
case 1:
insert();
break;
case 2:
delete_element();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
break;
default:
printf("Invalid choice");
break;
}
}while(option!=5);
return 0;
}
void insert()
{
int num;
if(front==0 && rear==max-1){
printf("\n Queue is full");
}
else
{
printf("\n Enter the data to be inserted:");
scanf("%d",&num);
if(front==-1&&rear==-1)
{
front++;
rear++;
queue[rear]=num;
}
else if(front!=0&&rear==max-1)
{rear=0;
queue[rear]=num;}
else
{
rear++;
queue[rear]=num;
}
}}
void delete_element()
{
if(front==-1&&rear==-1)
{
printf("Queue is Empty");
}
else
{
printf("\n The deleted element is %d",queue[front]);
if(front==rear)
{
front=rear=-1;
}
else if(front==max-1)
{
front=0;
}
else
{
front++;
}
}
}
void peek()
{
if(front==-1&&rear==-1)
{
printf("Queue is Empty");
}
else
{
printf("\n The first element in queue is %d",queue[front]);
}
}
void display()
{ int i;
if(front==-1&&rear==-1)
{
printf("\n Queue is Empty");}
else
{
printf("\n The elements in the queue are:");
if(front<rear)
{
for(i=front;i<rear;i++)
{
printf("%d\t",queue[i]);
}}
else if(front>rear)
{
for(i=front;i<max;i++)
{
printf("%d\t",queue[i]);
}
for(i=0;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}
else
{
printf("%d",queue[front]);
}
}
}

