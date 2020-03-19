#include<stdio.h>
#include<conio.h>
void append();
void delete_first_node();
void addAfter(int);
void display();
void addAtBegin();
void insertbefore(int,int);
int length();

struct node
{
	int data;
	struct node* link;
};
struct node* root =NULL;
void main()
{
	int ch,n,len=0,item,data;
	clrscr();
	while(1)
	{
		printf("\n Single link list operation=\n");
		printf("1.Append\n");
		printf("2.Addatbegin\n");
		printf("3.Addatafter\n");
		printf("4.Length\n");
		printf("5.Display\n");
		printf("6.Delete first node\n");
		printf("7.Insert before given data\n");
		printf("8.exit\n");
		printf("______________________\n");
		printf(" Enter your choice=");
		scanf("%d",&ch);
		printf("______________________\n");
		switch(ch)
		{
			case 1: append();
					break;
			case 2: addAtBegin();
					break;
			case 3: printf("Enter the element for search=");

				   scanf("%d",&n);
				    addAfter(n);
					break;
			case 4: len=length();
					printf("\n Length of link_list=%d",len);
					break;
			case 5: display();
					break;
			case 6: delete_first_node();
					break;
			case 7: printf("Enter the info where you want to insert before=");
				scanf("%d",&item);
					printf("ENter the data for new node=");
					scanf("%d",&data);
			 insertbefore(item,data);
			  break;
			case 8: exit(1);
			default: printf("\n Invalid Input ######\n \n");
			break;
		}
	}
}
void append() // for add at the end of the single list
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the node data=");
	scanf("%d",&temp->data);
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
void insertbefore(int item,int data)
{
 struct  node* ptr ,*temp, *loc;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=data;
  ptr=root;
  if(ptr==NULL)
  {
	printf("Empty");
  }
  else
  {
	while(ptr->data!=item)
	{
		loc=ptr;
		ptr=ptr->link;
	}
	if(root==ptr)
	{
		temp->link=root;
		root=temp;
	}
	else
	{
		temp->link=ptr;
		loc->link=temp;
	}
  }
}
int length()     //it count the lenght of the node
{  int  count=0;
	struct node* temp;
	temp=root;

	if(temp==NULL)
	{
		printf("\nEmpty link list");
	}
	else
	{
		while(temp!=NULL)
		{
			count++;
			temp=temp->link;
		}
	}
	return count;
}

void display()                 //Traverse the all node element
{
		struct node* temp;
		temp=root;
		if(temp==NULL)
		{
			printf("\nList is emepty");
		}
		else
		{
			while(temp !=NULL)
			{
				printf("%d-->",temp->data);
				temp=temp->link;
			} printf("\b\b\n______________________\n");
		}
}
void addAtBegin()         //Add at the begining of the node
{
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter data for new node=");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(root==NULL)
		{

			root=temp;
		}
		else
		{
			temp->link=root;
			root=temp;
		}
}
					   //Add at after given node in linklist
void addAfter(int item)
{    struct node* temp;
	struct node* p;
	p=root;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data for new node=");
	scanf("%d",&temp->data);
	    while(p!=NULL)
		 {     if(item==p->data)
				{
				   temp->link=p->link;
				   p->link=temp;
				   printf("item searched successfully");
				   break;
				}
			    p=p->link;

			 }


}


void delete_first_node()
{
	struct node* ptr;
	ptr=root;
	if(ptr==NULL)
	{
		printf("There are no any node(Empty");
	}
	else
	{
		root=ptr->link;
		free(ptr);
	}
}