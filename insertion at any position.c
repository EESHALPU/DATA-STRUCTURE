#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,pos,i,element;

    printf("Enter the element of array=");
    scanf("%d",&n);

    printf("Enter the array Elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the position where you want to insert element=");
    scanf("%d",&pos);

    for(i=n;i>pos-1;i--)
    {
        a[i]=a[i-1];
    }
    printf("Enter the New element=");

    scanf("%d",&element);
    a[pos-1]=element;

    printf("Element are=>");
    for(i=0;i<n+1;i++)
        printf("%d ",a[i]);
    getch();
}
