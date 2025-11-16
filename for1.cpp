//to check palindrome or not
#include<stdio.h>
int main()
{
	int rev=0,n,r,m;
	printf("enter a number:");
	scanf("%d",&n);
	m=n;
	for(rev;n!=0;n=n/10)
	{
		r=n%10;
		rev=rev*10+r;
	}
	if(rev==m)
	{
		printf("plaindrome\n");
	}
	else
	{
		printf("not a plaindrome\n");
	}
	return 0;
}
