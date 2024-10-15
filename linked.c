#include<stdio.h>
#include<stdlib.h>
 struct node
{
int data;
struct node*link;
}
*top,*top1,*temp;
void push();
void pop();
void display();
void main()
{
int number,choice;
printf("\nsingly linked stack\n");
printf("\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit");
while(1)
{
	printf("\n enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{                                                                                                                   
		case 1:
			printf("enter the element:");
			scanf("%d",&number);
			push(number);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			printf("\n Exit Point\n");
			break;
		default:
			printf("\n Invalid choice\n");
			break;
	}
}
}
void push(int element)
{
	if(top==NULL)
	{
	top==(struct node*)malloc(1*sizeof(struct node));
	top->link=NULL;
	top->data=element;
	}
	else
	{
	temp=(struct node*)malloc(1*sizeof(struct node));
	temp->link=top;
	temp->data=element;
	top=temp;
	}	
}
void pop()
{
	top1=top;
	if(top1==NULL)
	{
		printf("empty!");
		return;
	}
	else
	{
		top1=top1->link;
		printf("\n popped element is %d\n",top->data);
		free(top);
		top=top1;
	}
}
void display()
{
	top1=top;
	if(top1==NULL)
	{
	printf("\n empty stack\n");
	return;
	}
	while(top1!=NULL)
	{
	printf("%d",top1->data);
	top1=top1->link;
	}
}
