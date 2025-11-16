//to print even numbers
#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter n value:");
	scanf("%d",&n);
	for(i;i<=n;i+=2)
	{
		printf("%d\t",i);
	}
	return 0;
}
