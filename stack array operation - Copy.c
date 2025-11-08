#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
    system("color a");
    printf("\n\t\t\t\t\t\t\tenter the number of elements in stack=");
    scanf("%d",&n);
    printf("\n\n\n\t\t\t\t\t\t#####################stack operations with array#########################");
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
    int val;
    if(top==n)
    {
        printf("\n\t\t\t\t\t\t\t\t overflow*********** \n");
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t enter the value=");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
   if(top==-1)
   {
     printf("\n\t\t\t\t\t\t\t\t underflow*********** \n");
   }
   else
   {
       top=top-1;
       printf("\n\t\t\t\t\t\t\t element poped successful");
   }
}
void show()
{
    if(top==-1)
    {
        printf("\n\t\t\t\t\t stack is empty******\n");
    }
for(i=top;i>=0;i--)
    {
    printf("\n\n\t\t\t\t\t\t\t\t%d",stack[i]);
    }
}
