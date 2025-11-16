//to print product of digits
#include<stdio.h>
int main()
{
	int r,n,p;
	printf("enter n value:");
	scanf("%d",&n);
	for(p=1;n!=0;n=n/10)
	{
		r=n%10;
		p=p*r;
	}
	printf("%d",p);
	return 0;
}
