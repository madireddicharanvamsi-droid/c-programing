//to display yes if it is multiple of 5 otherwise display no
#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n%5==0)
	{
		printf("%d yes\n",n);
	}
	else
	printf("%d no\n",n);
	return 0;
}
