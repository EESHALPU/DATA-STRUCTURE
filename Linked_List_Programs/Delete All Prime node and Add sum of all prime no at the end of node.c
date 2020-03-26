#include<stdio.h>
#include<conio.h>
int psum=0;
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


int prime(int num)  // check prime and return the value
{
  int i,flag=0;
  for(i=2;i<=num/2;i++)
  {
      if(num%i==0)
      {

            flag=1;
            break;
      }


  }

        if(flag==0)
            return 1;
        else
            return 0;
}


void delete_prime()  // delete prime node and add sum at the last
{
    node* ptr, *locprev,*locnext;

    ptr=head;

    if(ptr==NULL)
    {
        printf("List is empty\n");
    }

    else
    {
        while(ptr!=NULL)
        {
            locprev=ptr->prev;
            locnext=ptr->next;
            if(prime(ptr->info))
            {
                psum=psum+ptr->info;

                if(ptr==head)
                {
                    head=NULL;
                    free(ptr);
                }

                else if(ptr->next==NULL)
                {
                    locprev->next=locnext;
                    tail=locprev;
                    free(ptr);
                }
                else
                {
                    locprev->next=locnext;
                    locnext->prev=locprev;

                    free(ptr);
                }
            }


            ptr=ptr->next;
        }

    node* temp;
    temp=(node*)malloc(sizeof(node));
    temp->info=psum;
    tail->next=temp;
    temp->next=NULL;
    printf("\n Sum of All prime node=%d",psum);
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


    while(1)
    {
	   printf("\n1.INESRT AT BEGINNING\n");
	   printf("2.INESRT AT END\n");
	   printf("3.DELETE AT BEGINNING\n");
	   printf("4.DELETE AT END\n");
	   printf("5.Delete All prime Node\n");
	   printf("6.DISPLAY ALL ELEMENT\n");
	   printf("7.EXIT FROM CONSOLE WINDOW\n");
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

		  case 5: delete_prime();
		  break;

		  case 6: traverse();
		  break;

		  case 7: exit(0);
		  default: printf("INCORRECT OPTION--><----->\n");

	   }
    }
}

