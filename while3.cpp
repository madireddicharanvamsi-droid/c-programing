//to print even numbers
#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i+=2;
	}
	return 0;
}
