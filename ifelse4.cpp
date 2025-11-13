//to display multiply by 6 or 9 otherwise no
#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n%6==0 && n%9==0)
	{
		printf("YES\n",n);
	}
	else
	printf("NO\n",n);
	return 0;
}

