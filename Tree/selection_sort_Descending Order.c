#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j=0,max,temp,n,arr[20];

    printf("Enter the Number of Element which you want to insert=");
    scanf("%d",&n);
    printf("Enter the Element=");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }


    for(i=0;i<n-1;i++)
    {
        max=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[max])
            {
                max=j;
            }
        }


    temp=arr[i];
    arr[i]=arr[max];
    arr[max]=temp;
   }

   printf("After sorting Element are-\n");
   for(i=0;i<n;i++)
   {
       printf("%d  ",arr[i]);
   }
}
