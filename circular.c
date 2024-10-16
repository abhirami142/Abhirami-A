#include<stdio.h>
#define max 10
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element)
{
front=0;
rear=0;
queue[rear]=element;
}
else if((rear+1)%max==front)
{
printf("queue is overflow");
}
else
{
rear=(rear+1)%max;
queue[rear]=element;
}
}
int dequeue()
{
if((front==-1)&&(rear==-1))
{
printf("\n Queue is underflow");
}
else if(front==rear)
{
printf("the dequeue element is %d",Q[front]);
front=-1;
rear=-1;
}
else
{
printf("the dequeue element is %d",Queue[front]);
front=(front+1)%max;
}
}
void display()
{
int i=front;
if(front==-1&&rear==-1)
{
printf("\n Queue is empty");
}
else
{
Printf("elements in the queue are:");
while(i<=rear)
{
printf("%d",queue[i]);
i=(i+1)%max;
}
}
}
int main()
{
int choice=1,x;
while(choice<4&&choice!=0)
}
