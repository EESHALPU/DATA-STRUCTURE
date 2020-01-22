#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],b[20],c[20],m,n,i,j,k;
	printf("Enter the first array size=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the Second array size=");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	
	//Sort first array element
	i=j=k=1;
	whiel(i<=m && i<=n)
	{
		if(a[i]<b[i+1])
		{
			c[k]=a[i];
			i=i+1;
		}
		else
		{
		c[k]=b[j];
		j=j+1;
	     } 
		k=k+1;
	}
	
	if(i>m)
		while(j<=n)
		{
		c[k]=b[j];
		j=j+1;
		k=k+1;
     	}
     	else
     	while(i<=m)
     	{
     		c[k]=a[i];
     		i=i+1;
     		k=k+1;
		 }
	for(k=1;k<=m+n;k++)
	{
		printf("%d ",c[k]);
	}
}
