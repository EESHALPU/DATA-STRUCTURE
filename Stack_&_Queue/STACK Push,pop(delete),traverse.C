#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int top=-1;
int stack[CAPACITY];
void push(int);
int pop();
int isEmpty();
int isFull();
void traverse();
void peek();

 void push(int element)
  {
	  if(isFull())
		{
			printf("Stack is overflow\n");
		}
	  else
	   {
		top++;
		stack[top]=element;
		printf("%d pushed element is \n",element);
	    }
  }


  int isFull() // it is used to check stack is full or not
  {
	if(top==CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
  }

 int isEmpty() //checking for empty or not
 {
		if(top==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
 }

  int pop()
  {
	if(isEmpty())
	{

			return 0;
	}
	else
	{
		return	stack[top--];

	 }
  }

   void peek()
   {
		if(isEmpty())
		{
			printf("Stack is underflow");
		}
		else
		{
			printf("Peek value of stack %d ",stack[top]);
		}
   }

   void traverse()
   {
		int i;
		if(isEmpty())
		{
			printf("Stack is underflow");
		}
		else
		{
			for(i=0;i<=top;i++)
			{
				printf("%d \n",stack[i]);
			}
		}
   }

void main()
{
	int ch,item;
	while(1)
	   {
		printf("\n1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. Traverse\n");
		printf("5. Quit\n");

		printf("Enter your choice=");
		scanf("%d",&ch);
			switch(ch)
				{
					case 1: printf("Enter the element=");
					scanf("%d",&item);
					push(item);
					 break;
					case 2: item=pop();
					if(item==0)
					   {
						printf("Stack underflow\n");
						break;
					   }
					else
					    {
							printf("Popped item is %d ",item);
						}
					 break;
					case 3: peek();
					break;
					case 4: traverse();
					break;
					case 5: exit(0);
					break;
					default : printf("Invalid choice plz enter correct option=");
					break;
				}
  }
	  getch();
}
