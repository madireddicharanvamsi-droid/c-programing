//wacp to find the given number is armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,ndigits=0,r,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		ndigits++;
		n=n/10;
	}
	n=m;
	while(n!=0)
	{
	   	r=n%10;
		sum=sum+pow(r,ndigits);
		n=n/10;	
	}
	if(sum==m)
	{
		printf("armstrong number\n");
	}
	else
	{
		printf("not a armstrong number\n");
	}
	return 0;
}
