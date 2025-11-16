//to find factorial of a given number
#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("%d!=%d\n",n,fact);
	return 0;
}
