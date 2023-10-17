#include<stdio.h>
#include<conio.h>
#define m 5
int front=-1,rear=-1;
int i,q[m];
int isEmpty()
{
return(front==-1&&rear==-1);
}
int isFull()
{
return((rear+1)%m==front);
}
void Enqueue(int data)
{
if(isFull())
{
printf("queue is full\n");
return;
}
if(isEmpty())
{
front=rear=0;
}
else
{
rear=(rear+1)%m;
}
q[rear]=data;
printf("%d added to the queue",data);
}
void dequeue()
{
if(isEmpty())
{
printf("queue is empty\n");
return;
}
printf("%d removed from queue",q[front]);
if(front==rear)
{
front=rear=-1;
}
else
{
front=(front+1)%m;
}}
int search(int key)
{
if(isEmpty())
{
printf("queue is empty\n");
return -1;
}
i=front;
do{
if(q[i]==key)
{
printf("%d found at position %d in the queue\n",key,i);
return -i;
}
i=(i+1)%m;
}
while(i!=(rear+1)%m);
printf("%d not found in the queue\n",key);
printf("\n");
return -1;
}
void display()
{
if(isEmpty())
{
printf("queue is empty\n");
return;
}
printf("circular queue\n");
i=front;
do
{
printf("%d\t",q[i]);
i=(i+1)%m;
}
while(i!=(rear+1)%m);
printf("\n");
}
int main()
{
int choice,data,key; clrscr();
while(1)
{
printf("\n\n1.Add(enqueue)\n2.Delete(dequeue)\n3.Search\n4.Display\n5.Exit\nEnter Your Choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter element to add\n");
scanf("%d",&data);
Enqueue(data);
break;
case 2:
dequeue();
break;
case 3:
printf("enter element to search\n");
scanf("%d",&key);
search(key);
break;
case 4:
display();
break;
case 5:
exit(0);
break;
default:
printf("sorry error\n");
}}
return 0;
}
