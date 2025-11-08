#include<stdlib.h>
#include<stdio.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search();
struct node
{
    char info[50];
    struct node *next;
};
struct node *start=NULL;
int main()
{
    system("color a");
    int choice;
    G:
    while(1)
    {
         printf("\n\n\t\t\t\t\t\t........................................................... \n");
        printf("\n\t\t\t\t\t\t\t\t\t *MENU* \n");
        printf("\n\t\t\t\t\t\t\t\t 1.CREATE \n");
        printf("\n\t\t\t\t\t\t\t\t 2.DISPLAY \n");
        printf("\n\t\t\t\t\t\t\t\t 3.INSERT AT THE BEGINNING \n");
        printf("\n\t\t\t\t\t\t\t\t 4.INSERT AT THE END \n");
        printf("\n\t\t\t\t\t\t\t\t 5.INSERT AT SPECIFIED POSITION \n");
        printf("\n\t\t\t\t\t\t\t\t 6.DELETE FROM BEGINNING \n");
        printf("\n\t\t\t\t\t\t\t\t 7.DELETE FROM THE END \n");
        printf("\n\t\t\t\t\t\t\t\t 8.DELETE FROM SPECIFIED POSITION \n");
        printf("\n\t\t\t\t\t\t\t\t 9.SEARCH \n");
        printf("\n\t\t\t\t\t\t\t\t 10.EXIT \n");
        printf("\n\n\t\t\t\t\t\t........................................................... \n");
      printf("\n\t\t\t\t\t\t\tenter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:
        create();
        break;
     case 2:
        display();
        break;
     case 3:
        insert_begin();
        break;
     case 4:
        insert_end();
        break;
     case 5:
        insert_pos();
        break;
     case 6:
        delete_begin();
        break;
     case 7:
        delete_end();
        break;
     case 8:
        delete_pos();
        break;
     case 9:
        search();
        break;
     case 10:
        exit(0);
        break;
     default:
        printf("\nwrong choice\n");
        break;
     }
    }
return 0;
}
void create()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
    printf("\n out of memory space");
    exit(0);
}
printf("\n\t\t\t\t\t\tenter the data value for the node=");
scanf("%s",&temp->info);
temp->next=NULL;
if(start==NULL)
{
    start=temp;
}
else
{
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
}
void display()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("\n\t\t\t\t\t\t list is empty");
        return;
    }
    else
    {
        ptr=start;
        printf("\n\t\t\t\t\t\t\t\t THE LIST ELEMENTS ARE:-\n");
        while(ptr!=NULL)
        {
            printf("\n\t\t\t\t\t\t\t\t\t%s\n\n",ptr->info);
            ptr=ptr->next;
        }
    }
}
void insert_begin()
{
struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
   {
    printf("\n out of memory space");
    exit(0);
   }
printf("\n\t\t\t\t\t\tenter the data value for the node=");
scanf("%s",&temp->info);
temp->next=NULL;
if(start==NULL)
   {
    start=temp;
   }
else
  {
    temp->next=start;
    start=temp;
   }
}
void insert_end()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
   {
    printf("\n out of memory space");
    exit(0);
   }
printf("\n\t\t\t\t\t\tenter the data value for the node=");
scanf("%s",&temp->info);
temp->next=NULL;
if(start==NULL)
   {
    start=temp;
   }
else
   {
     ptr=start;
     while(ptr->next!=NULL)
     {
         ptr=ptr->next;
     }
     ptr->next=temp;
   }
}
void delete_begin()
{
    struct node *ptr;
    if(ptr==NULL)
    {
        printf("\n\t\t\t\t\t\tLIST IS EMPTY\n");
        exit(0);
    }
    else{
        ptr=start;
        start=ptr->next;
        printf("\n\t\t\t\t\t\t\t\t THE DELETED ELEMENT IS : %s",ptr->info);
        free(ptr);
    }
}
void delete_end()
{
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("\n\t\t\t\t\t\tLIST IS EMPTY\n");
        exit(0);
    }
    else
        if(start->next==NULL)
    {
        ptr=start;
        start=NULL;
         printf("\n\t\t\t\t\t\t\t\t THE DELETED ELEMENT IS : %s",ptr->info);
        free(ptr);
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
         printf("\n\t\t\t\t\t\t\t\t THE DELETED ELEMENT IS : %s",ptr->info);
        free(ptr);
    }
}
void insert_pos()
{
struct node *ptr,*temp;
int i,pos;
temp=(struct node*)malloc(sizeof(struct node));
 if(temp==NULL)
   {
    printf("\n out of memory space");
    exit(0);
   }
    printf("\n\t\t\t\t\t\tENTER THE POSITION FOR THE NEW NODETO BE INSERT=");
    scanf("%d",&pos);
       printf("\n\t\t\t\t\t\tenter the data value for the node=");
scanf("%s",&temp->info);
temp->next=NULL;
if(pos==1)
   {
    temp->next=start;
    start=temp;
   }
   else
    if(pos==2)
   {
       ptr=start;
       temp->next=ptr->next;
       ptr->next=temp;
   }
     else
     {   ptr=start;
         for(i=2;i<pos;i++);
         {
             ptr=ptr->next;
             if(ptr==NULL)
             {
                 printf("\n\t\t\t\t\t\t position not found.....!");
                 return;
             }
         }
         temp->next=ptr->next;
         ptr->next=temp;
     }
}
void delete_pos()
{
  struct node *ptr,*temp;
int i,pos;
 if(start==NULL)
    {
        printf("\n\t\t\t\t\t\tLIST IS EMPTY\n");
        exit(0);
    }
    else
    {
        printf("\n\t\t\t\t\t\t ENTER THE POSITION FOR THE NEW NODETO BE INSERT=");
    scanf("%d",&pos);
    if(pos==0)
        {
        ptr=start;
        start=start->next;
    printf("\n\t\t\t\t\t\t\t\t THE DELETED ELEMENT IS : %s",ptr->info);
        free(ptr);
        }
       else
       {
        ptr=start;
        for(i=1;i<pos;i++)
             {
                 temp=ptr;
                 ptr=ptr->next;
                  if(ptr==NULL)
                   {
                 printf("\n\t\t\t\t\t\t position not found.....!");
                 return;
                   }
             }
             temp->next=ptr->next;
              printf("\n\t\t\t\t\t\t\t\t THE DELETED ELEMENT IS : %s",ptr->info);
        free(ptr);
       }
    }
}
void search()
{
    struct node *ptr,*loc;
    char item[50];
    int flag=0;
    if(start==NULL)
    {
        printf("\n\t\t\t\t\t\tLIST IS EMPTY\n");
        exit(0);
    }
    else
    {ptr=start;
    printf("\n\t\t\t\t\t\t\t\t ENTER THE ITEM TO BE SEARCH : ");
    scanf("%s",&item);
      while(ptr->next!=NULL)
      {
          if(strcmp(item,ptr->info)==0)
          {
              flag=1;
              loc=ptr;
              printf("\n\t\t\t\t\t\t\t item founded node address is :%d",loc);
              exit(0);
          }
          else
          {
              ptr=ptr->next;
          }
      }
      if(flag==0)
           {
      printf("\n\t\t\t\t\t\t search is unsuccessful");
           }
           else
           {
               printf("\n\t\t\t\t\t\t\t\t\tsearch is successful");
           }
    }
}





