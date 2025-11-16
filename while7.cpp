//to print product of digits
#include<stdio.h>
int main()
{
	int r,n,p=1;
	printf("enter n value:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("%d",p);
	return 0;
}
