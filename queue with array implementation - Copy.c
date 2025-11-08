#include<stdio.h>
#include<stdlib.h>
void insert();
void deletion();
void display();
int front=-1,rear=-1;
#define m 4
int queue[m];
void main()
{
    system("color a");
    int choice;
    while(choice!=4)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t########## MAIN MENU##############");
        printf("\n\n\n\t\t\t\t\t\t\t\t\t 1.INSERT AN ELEMENT");
        printf("\n\n\t\t\t\t\t\t\t\t\t 2.DELETE AN ELEMENT");
        printf("\n\n\t\t\t\t\t\t\t\t\t 3.DISPLAY AN ELEMENT");
        printf("\n\n\t\t\t\t\t\t\t\t\t 4.EXIT");
        printf("\n\n\t\t\t\t\t\t\t enter your choice=");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n\n\t\t\t\t\t\t\t enter valid choice=");
        }
    }
}
void insert()
{
int item;
 printf("\n\n\t\t\t\t\t\t\t enter the element=");
 scanf("%d",&item);
 if((front==0)&&(rear==m-1))
 {
     printf("\n\n\t\t\t\t\t\t\t\t\t overflow......");
     return;
 }
 if(front==-1&&rear==-1)
 {
     front=0;
     rear=0;
 }
 else
 {
     rear=rear+1;
 }
 queue[rear]=item;
  printf("\n\n\t\t\t\t\t\t\t value inserted.........");
}
void deletion()
{
int item;
if(front==-1)
{
     printf("\n\n\t\t\t\t\t\t\t underflow.........");
    return;
}
else
{
    item=queue[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=front+1;
    }
     printf("\n\n\t\t\t\t\t\t\t value deleted........");
}
}
void display()
{
int i;
if(rear==-1)
{
     printf("\n\n\t\t\t\t\t\t\t queue is empty........");
}
else
{
     printf("\n\n\t\t\t\t\t\t\t printing values..........");
     for(i=front;i<=rear;i++)
     {
          printf("\n\n\t\t\t\t\t\t\t %d",queue[i]);
     }
}
}
