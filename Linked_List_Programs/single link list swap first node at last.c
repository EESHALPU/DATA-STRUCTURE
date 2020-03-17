#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct single_linklist
{
    struct single_linklist *link;
    int info;
} node;

node* head=NULL;

void insertAtBeg()
{ int n,i;
    printf("Enter the No of item which you want to insert=");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
     node* ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("Enter New data-%d=",i+1);
    scanf("%d",&ptr->info);

    if(head==NULL)
    {
        head=ptr;
        ptr->link=NULL;
    }
    else
    {
        ptr->link=head;
        head=ptr;
    }

}  }

void traverse()
{

    node* ptr;

    ptr=head;

    if(ptr==NULL)
    {
        printf("Link is already Empty\n");
    }
    else{


        while(ptr!=NULL)
        {
            printf("|%d|",ptr->info);
            ptr=ptr->link;
        }
    }
}
void swap_first_node()
{
    int temp1,temp2;

    if(head==NULL)
    {

        printf("List is already empty");

    }
    else
    {

        temp1=head->info;
        node *ptr=head;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }

        temp2=ptr->info;
        ptr->info=temp1;
        head->info=temp2;
    }
    printf("First node is swapped\n");
}



void main()
{
    int ch;
        printf("\n1.Insert node\n");
        printf("2. Traverse\n");
        printf("3.Swap first node\n");
        printf("4. Exit\n");
    while(1)
    {

        printf("\n_______________________\n");
        printf("Enter the Choice=");
        scanf("%d",&ch);
        printf("\n_______________________\n");
        switch(ch)
        {
            case 1: insertAtBeg();
            break;
            case 2: traverse();
            break;
            case 3: swap_first_node();
            break;
            case 4: exit(0);
            break;
            default: printf("\n Enter the Correct option\n");

        }
    }
}
