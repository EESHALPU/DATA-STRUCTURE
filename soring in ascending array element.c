#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i,temp,j;

    printf("Enter the element of array=");
    scanf("%d",&n);

    printf("Enter the array Elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j+1];//temp=a[j];
                a[j+1]=a[j];//a[j]=a[j+1];
                a[j]=temp;//a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
}
