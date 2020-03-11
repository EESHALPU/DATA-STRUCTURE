#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int front=0;
int rear=0;
queue[CAPACITY];

void insert(int ele)
{
     if(rear==CAPACITY)
     {
          printf("Queue is Empty");

     }
     else
     {

          queue[rear]=ele;
          rear++;
     }

}

void delete_ele()
{  int i;
     if(front==rear)
     {
          printf("Queue is empty");
     }

     else
     {
          printf("Delete ::%d",queue[front]);

     }

     for(i=1;i<rear-1;i++)
     {
          queue[i]==queue[i+1];

     }

     rear--;


}


void traverse()
{


     int i;
     if(front==rear)
     {
          printf("Queue is empty");
     }
     else
     {
          printf("queue element=\n");
          printf("_____________________\n");

          for(i=front;i<rear;i++)
          {
               printf("|%d|",queue[i]);
          }
                    printf("\n_____________________\n");
     }
}



void main()
{    int ch,ele;
     while(1)
     {
          printf("1. Insertion\n");
          printf("2. deletion\n");
          printf("3. traverse\n");
          printf("4. exit\n");
          printf("_____________________\n");
          printf("Enter the choice=");
          scanf("%d",&ch);
          printf("_____________________\n");
     switch(ch)
     {
          case 1: printf("Enter the New element=");
                  scanf("%d",&ele);
                  insert(ele);
                  break;
          case     2: delete_ele();
                  break;
          case 3: traverse();
               break;

          case 4: exit(0);
     }
   }
}


