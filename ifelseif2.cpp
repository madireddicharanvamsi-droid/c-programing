//to print days in a week
#include<stdio.h>
int main()
{
	int d;
	printf("Enter single digit:");
	scanf("%d",&d);
	if(d==1)
	{
		printf("SUNDAY\n");
	}
	else if(d==2) printf("MONDAY\n");
	else if(d==3) printf("TUESDAY\n");
	else if(d==4) printf("WEDNESDAY\n");
	else if(d==5) printf("THURSDAY\n");
	else if(d==6) printf("FRIDAY\n");
	else if(d==7) printf("SATURDAY\n");
	else printf("INVALID");
	return 0;
}
