//to print a digits in work
#include<stdio.h>
int main()
{
	int d;
	printf("enter a day:");
	scanf("%d",&d);
	if(d==0)
	{
		printf("ZERO\n");
	}
	else if(d==1) printf("ONE\n");
	else if(d==2) printf("TWO\n");
	else if(d==3) printf("THREE\n");
	else if(d==4) printf("FOUR\n");
	else if(d==5) printf("FIVE\n");
	else printf("INVALID\n");
	return 0;
}
