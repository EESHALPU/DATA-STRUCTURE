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
{ int n,i;
  printf("Enter the No. of Element for insertion=");
  scanf("%d",&n);
  printf("Enter the Priority and Element\n");
  for(i=0;i<n;i++)
  {
    temp=(node*)malloc(sizeof(node));
    printf("Priority=");
    scanf("%d",&temp->pri);
    printf("Data=");
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
        }
        //while loop for traversing element.....
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


    printf("_____________________________\n");
}


void delete_element(int given_pr)
{
    node* ptr, *loc;
    ptr=head;
    if(head==NULL)
    {
        printf("List is already Empty\n");
    }
    else
    {
        while(ptr->pri!=given_pr)
        {
            loc=ptr;
            ptr=ptr->next;
            if(ptr==NULL)
            {
                break;

            }
        }
    }

     if(ptr==NULL)
        {
           printf("Wrong Priority of element entered!!!\n");

        }
     else if (ptr==head)
        {
            head=head->next;
            free(ptr);
            printf("Priority of %d element is successfully deleted\n",given_pr);

        }
        else
        {
            loc->next=ptr->next;
            free(ptr);
            printf("Priority of %d element is successfully deleted\n",given_pr);

        }

  printf("___________________________________________\n");
}

void traverse()
{
    printf("____________________________\n");
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

    printf("\n_____________________________\n");

}




void main()
{
    int ch,pr;

        printf("1.Enqueue\n");
        printf("2.traverse\n");
        printf("3.Dequeue\n");
        printf("4.Exit");

    printf("\n_____________________________\n");
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
            case 3:
                printf("Enter the Priority of Element which you want to delete=");
                scanf("%d",&pr);
                delete_element(pr);
                break;
            case 4: exit(0);
            default:printf("Enter correct Option\n");
            break;
        }
    }
}
