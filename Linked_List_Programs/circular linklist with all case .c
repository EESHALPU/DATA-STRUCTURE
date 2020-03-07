//Program for circular link_list
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct cir_linked_list
{
    struct cir_linked_list *link;
    int info;

}node;

node* head=NULL;
void insertAtBeg();
void traverse();
void insertAtEnd();
void main()
{
    void insertAtBeg()
    {
        node *ptr,*loc;

        ptr=(node*)malloc(sizeof(node));
        printf("Enter the Element for new node=");
        scanf("%d",&ptr->info);

        if(head==NULL)
        {
            head=ptr;
            ptr->link=ptr;
        }

        else
        {
            loc=head;
            while(loc->link!=head)
            {
                loc=loc->link;
            }

          ptr->link=head;
          head=ptr;
          loc->link=ptr;

        }

    }

    void insertAtEnd()
    {
            node *ptr,*loc;

            ptr=(node*)malloc(sizeof(node));
            printf("Enter the Element for new node=");
            scanf("%d",&ptr->info);

            if(head==NULL)
            {
                head=ptr;
                ptr->link=ptr;
            }

            else
            {
                loc=head;
            while(loc->link!=head)
            {
                loc=loc->link;
            }

            ptr->link=head;
            loc->link=ptr;

            }
    }

    void traverse()
    {
        node *ptr;
        ptr=head;

        if(ptr==NULL)
        {
            printf("Already empty!!!!!!!!!!!!!!!!!!!!!!\n");

        }
        else
        {
            do
            {
                printf("%d->",ptr->info);
                ptr=ptr->link;
            }
            while(ptr!=head);
            printf("\b\b\n");
        }
    }

    void deleteAtBeg()
    {
        node *ptr, *loc;
        ptr=loc=head;
        if(head==NULL)
        {
            printf("\nList is already Empty!!!!!!!!!!!!!\n");
        }
        else if(loc->link==head)
        {
            head=NULL;
            loc=NULL;
            free(ptr);
        }
        else
        {

            while(loc->link!=head)
            {
                loc=loc->link;
            }
            head=head->link;
            loc->link=head;
            free(ptr);

        }
    }


      void deleteAtEnd()
    {
        node *ptr, *loc;
        ptr=loc=head;
        if(head==NULL)
        {
            printf("\nList is already Empty!!!!!!!!!!!!!\n");
        }
        else if(loc->link==head)
        {
            head=NULL;
            loc=NULL;
            free(ptr);
        }
        else
        {

            while(ptr->link!=head)
            {
                loc=ptr;
                ptr=ptr->link;
            }
            loc->link=head;
            free(ptr);

        }
    }

    void deleteEntire()
    {
        while(head!=NULL)
        {

            node *ptr, *loc;
            ptr=loc=head;
            if(head==NULL)
            {
                printf("\nList is already Empty!!!!!!!!!!!!!\n");
            }
            else if(loc->link==head)
            {
                head=NULL;
                loc=NULL;
                free(ptr);
            }
            else
            {

                while(ptr->link!=head)
                {
                    loc=ptr;
                    ptr=ptr->link;
                }
                loc->link=head;
                free(ptr);

            }
        }
        printf("All Elements has been successfully deleted\n");
    }

    int ch;
    while(1)
    {
        printf("1.Insert At beginning\n");
        printf("2.Insert At End \n");
        printf("3.Display\n");
        printf("4.DeleteAtBeg\n");
        printf("5.DeleteAtEnd\n");
        printf("6.DeleteEntire\n");
        printf("7.Exit\n");
        printf("__________________________________\n");
        printf("Enter the Choice=");
        scanf("%d",&ch);

     switch(ch)
     {
         case 1: insertAtBeg();
         break;
         case 2: insertAtEnd();
         break;
         case 3: traverse();
         break;
         case 4: deleteAtBeg();
         break;
         case 5:deleteAtEnd();
         break;
         case 6:  deleteEntire();
         break;

         case 7: exit(0);
         break;
         default : printf("Enter the Correct choice");
         break;
     }
   }
}
