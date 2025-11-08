#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void show();
struct node
{
    int val;
    struct node *next;
};
struct node *head;
void main()
{
    system("color a");
    int choice=0;
    printf("\n\n\n\t\t\t\t\t\t#####################stack operations with linked list #########################");
   while(choice!=4)
   {
       printf("\n\n\t\t\t\t\t*******************choose one from the below option****************************");
      printf("\n\n\t\t\t\t\t\t\t\t\t 1. PUSH\n");
       printf("\n\t\t\t\t\t\t\t\t\t 2. POP\n");
       printf("\n\t\t\t\t\t\t\t\t\t 3. SHOW\n");
       printf("\n\t\t\t\t\t\t\t\t\t 4. EXIT\n");
      printf("\n\t\t\t\t\t\t enter your choice=");
      scanf("%d",&choice);
      switch(choice)
      {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        show();
        break;
      case 4:
        printf("\n exiting .............\n");
        break;
      default:
        printf("\n wrong choice******* \n");

      }
   }
}
void push()
{
int value;
struct node *ptr=(struct node*)malloc(sizeof(struct node));
   if(ptr==NULL)
   {
       printf("\n\n\t\t\t\t\t\t\tnot able to push  the element");
   }
   else
   {
       printf("\n\t\t\t\t\t\t\t enter the value=");
       scanf("%d",&value);
       if(head==NULL)
       {
           ptr->val=value;
           ptr->next=NULL;
           head=ptr;
       }
       else
       {
           ptr->val=value;
           ptr->next=head;
           head=ptr;
       }
       printf("\n\t\t\t\t\t\t\t\t item pushed");
   }
}
void pop()
{
int item;
struct node *ptr;
    if(head==NULL)
    {
      printf("\n\t\t\t\t\t\t\t\t underflow*******");
    }
    else{
        item=head->val;
        ptr=head;
        head=head->next;
        printf("\n\t\t\t\t\t\t item poped is=%d",ptr->val);
        free(ptr);
    }
}
void show()
{
int i;
struct node *ptr;
 ptr=head;
 if(ptr==NULL)
 {
     printf("\n\t\t\t\t\t\t\t\t stack is empty*******");
 }
 else
 {
     printf("\n\t\t\t\t\t\t\t\t stack elements are=");
     while(ptr!=NULL)
     {
         printf("\n\n\t\t\t\t\t\t\t\t\t%d",ptr->val);
         ptr=ptr->next;
     }
 }
}
