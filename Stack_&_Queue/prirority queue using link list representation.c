#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct priority_queue
{
    struct priority_queue *next;
    int pri,info;
}node;
node *head=NULL;
node *ptr,*temp, *loc;

void insertNode()
{
    temp=(node*)malloc(sizeof(node));
    printf("Enter the Priority for new node=");
    scanf("%d",&temp->pri);
    printf("Enter the Data for new node=");
    scanf("%d",&temp->info);
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }

    else
    {
        ptr=head;
        while(ptr->pri<temp->pri&&ptr->next!=NULL)
        {
            loc=ptr;
            ptr=ptr->next;
        }//while loop for traversing element.....
        if(ptr->pri>temp->pri)
         {
            if(ptr==head)
                {
                temp->next=head;
                head=temp;
                }
             else
                {
                temp->next=ptr;
                loc->next=temp;
                }
           }

         else
         {
            loc=ptr->next;   // pointing next node of current pointer....
            temp->next=loc;
            ptr->next=temp;

         }
    }
}





void traverse()
{
    printf("_____________________\n");
    node* ptr;
    ptr=head;

    if(head==NULL)
    {
        printf("Empty List");


    }
    else
    {
        while(ptr!=NULL)
        {
            printf("|%d %d|->",ptr->pri,ptr->info);
            ptr=ptr->next;
        }
        printf("\b");
    }

    printf("\n_____________________\n");

}




void main()
{
    int ch;

        printf("1.Insertion\n");
        printf("2. traverse\n");
        printf("3. Exit\n");
    while(1)
    {
        printf("Choose option=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insertNode();
            break;
            case 2: traverse();
            break;
            case 3: exit(0);
            default:printf("Enter correct Option\n");
            break;
        }
    }
}
