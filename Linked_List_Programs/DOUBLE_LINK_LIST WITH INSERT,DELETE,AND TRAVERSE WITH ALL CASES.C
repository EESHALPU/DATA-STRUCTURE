#include<stdio.h>
#include<conio.h>
typedef struct ddl
{
    struct ddl *prev;
    int info;
    struct ddl *next;

}node;
node *head=NULL,*tail=NULL;

//INSERTION AT BEGINNING
void insertAtBeg()
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("\nEnter the Element=");
    scanf("%d",&ptr->info);

    if(head==NULL)
    {
	   ptr->next=ptr->prev=NULL;
	   head=tail=ptr;

    }
    else
    {
	   ptr->next=head;
           head->prev=ptr;
	   ptr->prev=NULL;
	   head=ptr;
    }

}

//INSERTION AT END OF THE NODE................
void insertAtEnd()
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("\nEnter the Element=");
    scanf("%d",&ptr->info);

    if(head==NULL)
    {
	   ptr->next=ptr->prev=NULL;
	   head=tail=ptr;

    }
    else
    {
	   tail->next=ptr;
	   ptr->prev=tail;
	   ptr->next=NULL;
	   tail=ptr;
    }


}

//DELETE AT THE END OF NODE.................
void deleteAtEnd()
{
    node *ptr,*loc;
    if(head==NULL)
    {
	   printf("List is already Empty!!!!!!!!!!!!1111111");

    }
    else if(tail->prev==NULL)
    {
	   ptr=tail;
	   head=tail=NULL;
	   free(ptr);
	   printf("\n ALL ELEMENT HAS BEEN SUCCESSFULLY DELETED\n");
	}
    else
    {
	   ptr=tail;
	   tail=tail->prev;
	   tail->next=NULL;
	   free(ptr);

    }
}

//DELETE AT BEGINNING OF THE NODE ........................
void deleteAtBeg()
{
    node *ptr;
    if(head==NULL)
    {
	   printf("List is already Empty!!!!!!!!!!!!1111111");

    }
    else if(head->next==NULL)
    {
	   ptr=head;
	   head=tail=NULL;
	   free(ptr);
	   printf("\n ALL ELEMENT HAS BEEN SUCCESSFULLY DELETED\n");
    }
    else
    {
	   ptr=head;
	   head=head->next;
	   head->prev=NULL;
	   free(ptr);
    }
}
//FOR DISPLAYING THE ALL ELEMENT OF DOUBLE LINK LIST..............
void traverse()
{
    node *ptr=head;

    if(head==NULL)
    {
	   printf("\nList is Empty!!!!!!!!!!!!!!!\n");
    }
	   printf("_______________________________\n");
    while(ptr!=NULL)
    {
	   printf("|%d|",ptr->info);
	   ptr=ptr->next;
    }
	   printf("\n_______________________________\n");
}


//MAIN FUNCTION ...............................

void main()
{
    int ch;
    clrscr();

    while(1)
    {
	   printf("\n1.INESRT AT BEGINNING\n");
	   printf("2.INESRT AT END\n");
	   printf("3.DELETE AT BEGINNING\n");
	   printf("4.DELETE AT END\n");
	   printf("5.DISPLAY ALL ELEMENT\n");
	   printf("6.EXIT FROM CONSOLE WINDOW\n");
	   printf("_______________________________\n");

	   printf("Enter Choice=>");
	   scanf("%d",&ch);

	   printf("_______________________________\n");

	   switch(ch)
	   {
		  case 1: insertAtBeg();
		  break;

		  case 2: insertAtEnd();
		  break;

		  case 3: deleteAtBeg();
		  break;

		  case 4: deleteAtEnd();
		  break;

		  case 5: traverse();
		  break;

		  case 6: exit(0);
		  default: printf("INCORRECT OPTION--><----->\n");

	   }
    }
}
