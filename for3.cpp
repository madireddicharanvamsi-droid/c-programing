//to print sum of first n natural numbers
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter n value:");
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d\n",sum);
	return 0;
}

