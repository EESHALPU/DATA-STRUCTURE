#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add_node();
int big();
void big_delete();
void disp();
typedef struct linked_list
{
    int info;
    struct linked_list *link;
}node;
node * head=NULL;
//fun. for add new node ........
void big_delete()
{
    node* ptr;
    node* loc;
    ptr=head;
    if(head==NULL)
        printf("NOde is empty");
    else
    {
        while(ptr!=NULL)
        {
            if(ptr->info==big())
            {
                    if(head==ptr)
                    {
                        head=ptr->link;
                        free(ptr);
                        break;
                    }
                    loc->link=ptr->link;
                    printf("%d is deleted\n",ptr->info);
                    free(ptr);
                    break;
            }
        loc=ptr;
        ptr=ptr->link;
        }
    }
}
void disp()
{

    if(head==NULL)
        printf("Empty");
    else
    {
        node* ptr=head;
        while(ptr!=NULL)
        {
            printf(" %d ",ptr->info);

            ptr=ptr->link;
        }
        printf("\n");
    }
}
int big()
{
    int greater_no;
    node* ptr;
    ptr=head;
    if(head==NULL)
            printf("List is empty");

    else if(ptr->link==NULL)
    {
            printf("only %d element is present",ptr->info);

    }
    else
    {   greater_no=head->info;
        while(ptr !=NULL)
        {
            if(ptr->info>greater_no)
            {
                greater_no=ptr->info;
            }
            ptr=ptr->link;
        }
        return greater_no;
    }
}

void add_node()
{
    node* ptr;
    int item;
    ptr=(node*)malloc(sizeof(node));
    printf("Enter new item=");
    scanf("%d",&item);
    ptr->info=item;
    if(head==NULL)
    {
        ptr->link=NULL;
        head=ptr;

    }
    else
    {
        ptr->link=head;
        head=ptr;
    }
}

int main()
{
    int ch;
    printf("1.Add new node:\n");
    printf("2.delete large value with node=\n");
    printf("3. Display largest element in list=\n");
    printf("4.Display all element\n");
    printf("5.Exit\n");
     while(1)
     {
        printf("Enter the choice=: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: add_node();
            break;
            case 2: big_delete();
            break;
            case 3: printf("%d is greater no\n",big());
            break;
            case 4: disp();
            break;
            case 5: exit(0);
            default: printf("Enter the correct option:\n");
            break;
        }
    }
}
