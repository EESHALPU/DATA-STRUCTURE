#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j=0,min,temp,n,arr[20];

    printf("Enter the Number of Element which you want to insert=");
    scanf("%d",&n);
    printf("Enter the Element=");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }


    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }


    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
   }

   printf("After sorting Element are-\n");
   for(i=0;i<n;i++)
   {
       printf("%d  ",arr[i]);
   }
}
