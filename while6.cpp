//to count number of digits in a number
#include<stdio.h>
int main()
{
	int n,r,c=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		c=c+1;
		n=n/10;
	}
	printf("%d",c);
	return 0;
}
