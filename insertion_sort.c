#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("enter no of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0 && a[j]>t)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	printf("the array after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
