//write a c program to sort the elements using bubble sort
#include<stdio.h>
int main()
{
	int a[10],n,i,j,t;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("before sorting:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	//bubble sort
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])//swapping
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("after sorting:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
