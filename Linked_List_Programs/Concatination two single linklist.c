#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert_first_linklist();
void insert_second_linkList();
void concatinate();
void traverse();


typedef struct linklist
{
    int info;
    struct linklist *next;
}node;

node *head1=NULL,*head2=NULL;

void insert_first_linklist()
{
    int i,n;
    printf("Enter the No. of node which you want to Add=");
    scanf("%d",&n);
    printf("Enter Element for FIRST LINKLIST=\n");
    for(i=0;i<n;i++)
    {
        node *temp;
        temp=(node*)malloc(sizeof(node));
        printf("Enter Element:%d= ",i+1);
        scanf("%d",&temp->info);
        if(head1==NULL)
        {
            head1=temp;
            temp->next=NULL;
        }
        else
        {
            temp->next=head1;
            head1=temp;
        }
    }
}

void insert_second_linklist()
{
    int i,n;
    printf("Enter the No. of node which you want to Add=");
    scanf("%d",&n);
    printf("Enter Element for SECOND LINKLIST=\n");
    for(i=0;i<n;i++)
    {
        node *temp;
        temp=(node*)malloc(sizeof(node));
        printf("Enter Element:%d= ",i+1);
        scanf("%d",&temp->info);
        if(head2==NULL)
        {
            head2=temp;
            temp->next=NULL;
         }
        else
        {
            temp->next=head2;
            head2=temp;
        }
    }
}

void concatinate()
{
    node *end, *ptr, *loc;
    ptr=head1;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    end=ptr;
    ptr=head2;
    while(ptr!=NULL)
    {
        loc=ptr;
        node* temp;
        temp=(node*)malloc(sizeof(node));
        temp->info=ptr->info;
        temp->next=NULL;

        end->next=temp;
        end=temp;
        ptr=ptr->next;
        head2=ptr;
        free(loc);
    }
    if(head2==NULL)
    {
        printf("No element in second LinkList=0\n");
    }
    printf("Concatinate done\n");
}

void traverse()
{
    int n;
    node* ptr;
    printf("Enter the 1 for first list and 2 for second list\n");
    scanf("%d",&n);
    if(n==1)
    {
        ptr=head1;
    }
    else if(n==2)
    {
        ptr=head2;
    }
    else
    {
        printf("Wrong option\n");
        exit(1);
    }



    if(ptr==NULL)
    {
        printf("Empty\n");

    }
    else
    {
        while(ptr!=NULL)
        {
            printf("|%d|",ptr->info);
            ptr=ptr->next;
        }
        printf("\n__________________\n");

    }
}




void main()
{

    int ch;
    printf("1. Fist link list\n");
    printf("2. Second link list\n");
    printf("3. Traverse\n");
    printf("4. concatinate\n");
    printf("5. Exit\n");

    while(1)
    {
        printf("1. Enter the Choice=");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: insert_first_linklist();
        break;
        case 2: insert_second_linklist();
        break;
        case 3:
        traverse();
        break;
        case 4:concatinate();
        break;
        case 5:exit(1);
        default:
            printf("Please enter correct option=!!!!!!!!\n");

        }
    }
 }

