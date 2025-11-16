//to find individual sum of digits 
#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter n value:");
	scanf("%d",&n);
	for(sum;n!=0;n=n/10)
	{
		r=n%10;
		sum=sum+r;
	}
	printf("sum=%d\n",sum);
	return 0;
}
