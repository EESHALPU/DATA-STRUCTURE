#include<stdio.h>
#include<conio.h>
main()
{
	int a[15],n,i,mid,high,low,element;
	printf("Enter the size of array=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element");
	scanf("%d",&element);
	
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(element<a[mid])	
		{
			high=mid-1;
			
		}
		else if(element>a[mid])
		{
			low=mid+1;
		}
		else if(element=a[mid])
		{
			//found=1;
			printf("Element found @ at %d ",mid+1);
			break;
		}
	}
}

