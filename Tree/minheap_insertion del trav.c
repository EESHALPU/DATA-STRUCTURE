#include<stdio.h>

int heap[100];
int count=0;

int getParentIdx(int index)
{
    return index/2;
}

int getLeftChildIdx(int index)
{
    return index*2;
}

int getRightChildIdx(int index)
{
    return index*2+1;
}

void upheapmin(int index)
{
    if(index <=1) return;
    int parentIdx = getParentIdx(index);
    if(heap[index]<heap[parentIdx])
    {
        int temp=heap[index];
        heap[index]=heap[parentIdx];
        heap[parentIdx]=temp;
        upheapmin(parentIdx);
    }
}
void push(int value)
{
    count++;
    heap[count]=value;
    upheapmin(count);
}

void traverse()
{
    int i;
    for(i=1;i<=count;i++)
    {
        printf("%2d ",heap[i]);
    }
    printf("\n");
}

void downheapmin(int index)
{
    if(index*2>count) return;
    int left=getLeftChildIdx(index);
    int right=getRightChildIdx(index);

    int smallest=index;
    if(left<=count && heap[left]<heap[smallest])
    {
        smallest=left;
    }
    if(right<=count && heap[right]<heap[smallest])
    {
        smallest=right ;
    }
    if(smallest==index)return;
    int temp =heap[index];
    heap[index]=heap[smallest];
    heap[smallest]=temp;

    downheapmin(smallest);
}
void pop()
{
    if(count == 0)
    {
        return;
    }
    heap[1]=heap[count];
    count--;
    downheapmin(1);
}



int main()
{
    int ch,element,i,n;
    while(1)
    {

        printf("1.Push\n");
        printf("2.Traverse\n");
        printf("3.Pop\n");
        printf("4.Exit\n");
        printf("_________________________\n");
        printf("Enter the Choice=");

        scanf("%d",&ch);
        printf("_________________________\n");

        switch(ch)
        {
            case 1:
                printf("Enter the Number of element which you want to insert=");
                scanf("%d",&n);
                printf("Enter %d Element=",n);
                for(i=0;i<n;i++)
                {
                    scanf("%d",&element);
                    push(element);
                }
                break;
            case 2: traverse();
                break;
            case 3: pop();
                break;
            case 4: exit(0);
            default: printf("\nWrong Entered\n");
        }


   }
}
