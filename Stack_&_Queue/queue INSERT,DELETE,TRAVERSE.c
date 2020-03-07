#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0;
int rear=0;
void main()
{
    void insert()
    {
        if(rear==CAPACITY)
        {
            printf("Queue is full^^^^^^^^^^^^^^\n");
        }
        else
        {
            int ele;
            printf("\nEnter the Element=");
            scanf("%d",&ele);
            queue[rear]=ele;
            rear++;
        }
    }

    void delete()
    {
            if(front==rear)
            {
                printf("\nQueue empty !!!!!!!!!!!!!!!\n");
            }

            else
            {
                int i;
                printf("Deleted::%d",queue[front]);
                for(i=0;i<rear-1;i++)
                {
                    queue[i]=queue[i+1];
                }
                rear--;
            }
    }
    void traverse()
    {
        if(front==rear)
            {
                printf("\nQueue empty !!!!!!!!!!!!!!!\n");

            }
        else
            {   int i;
                printf("Queue element are=>");
                for(i=front;i<rear;i++)
                {
                    printf("|%d|",queue[i]);
                }
            }
            printf("\n");

    }


    int ch;
    while(1)
    {
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Displaying\n");
        printf("4.Exit\n");
        printf("______________________\n");
        printf("enter correct option");
        scanf("%d",&ch);
        printf("______________________\n");

        switch(ch)
        {

            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: traverse();
            break;
            case 4: exit(0);
            break;
            default:
            printf("choose correct option\n");
            break;
        }
    }
  }

