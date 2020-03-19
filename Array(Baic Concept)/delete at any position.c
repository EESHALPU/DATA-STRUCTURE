#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,pos,i;

    printf("Enter the element of array=");
    scanf("%d",&n);

    printf("Enter the array Elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the position where you want to delete element=");
    scanf("%d",&pos);
    for(i=pos;i<=n;i++)
        a[i-1]=a[i];

    printf("Element are=");
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
}
