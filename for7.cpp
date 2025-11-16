//to count number of digits in a number
#include<stdio.h>
int main()
{
	int n,r,c;
	printf("enter a number:");
	scanf("%d",&n);
	for(c=0;n!=0;n=n/10)
	{
		r=n%10;
		c=c+1;
	}
	printf("%d",c);
	return 0;
}
