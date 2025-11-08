#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void deletion();
void display();
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
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
         printf("\n\n\t\t\t\t\t\t\t overflow..........");
         return;
    }
    else
    {
         printf("\n\n\t\t\t\t\t\t\t enter the element=");
         scanf("%d",&item);
         ptr->data=item;
         if(front==NULL)
         {
             front=ptr;
             rear=ptr;
             front->next=NULL;
             rear->next=NULL;
         }
         else
            rear->next=ptr;
         rear=ptr;
         rear->next=NULL;
    }
    printf("\n\n\t\t\t\t\t\t\t element inserted...........");
}
void deletion()
{
    struct node *ptr;
    if(front==NULL)
    {
         printf("\n\n\t\t\t\t\t\t\t underflow............");
        return;
     }
     else
     {
         ptr=front;
         front=front->next;
         free(ptr);
          printf("\n\n\t\t\t\t\t\t\t element deleted...........");
     }
}
void display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL)
    {
         printf("\n\n\t\t\t\t\t\t\t queue is empty.............");
         return;
    }
    else
    {
         printf("\n\n\t\t\t\t\t\t\t printing elements...........");
           while(ptr!=NULL)
           {
               printf("\n\n\t\t\t\t\t\t\t %d",ptr->data);
               ptr=ptr->next;
           }
    }
}
