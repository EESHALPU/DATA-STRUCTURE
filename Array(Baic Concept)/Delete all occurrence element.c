#include<stdio.h>
#include<conio.h>
 main()
{
  int a[20],n,i,j,elem,cout=0,new_elem;
  printf("Enter the array size=");
  scanf("%d",&n);

  printf("Enter Array Element=");
  for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
      }

printf("\nEnter the new element for deletion=");
scanf("%d",&elem);
for(i=0;i<n;i++)
{
   if(a[i]==elem)
        {
            cout++;
              for(j=i;j<n;j++)
                  {
                     a[j]=a[j+1];
                  }
	i=i-1;
       }
}

if(cout==0)
{
 printf("No any occurrence element=");
 return 0;
}

printf("\nAfter deletion of element=");
     for(i=0;i<n-cout;i++)
         {
            printf("%d ",a[i]);
         }

printf("\nEnter New element which you want to add at 5Th position=");
scanf("%d",&new_elem);
   for(i=4;i<n-cout;i++)
         {
            a[i+1]=a[i];
         }
  a[4]=new_elem;

printf("\nAfter adding new element=");
     for(i=0;i<n-cout+1;i++)
         {
            printf("%d ",a[i]);
         }
}


