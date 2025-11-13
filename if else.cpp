//to check the given number is even or odd
#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("given number is %d even\n",n);
	}
	else
	printf("given number is %d odd\n",n);
	return 0;
}
