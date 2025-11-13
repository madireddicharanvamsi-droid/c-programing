//wacp to find grade
#include<stdio.h>
int main()
{
	int per;
	printf("Enter percentage:");
	scanf("%d",&per);
	if(per>=90)
	{
		printf("Grade O\n");
	}
	else if(per<90 && per>=80) printf("Grade A\n");
	else if(per<80 && per>=70) printf("Grade B\n");
	else if(per<70 && per>=60) printf("Grade C\n");
	else if(per<60 && per>=50) printf("Grade D\n");
	else if(per<50 && per>=40) printf("Grade E\n");
	else printf("FAIL\n");
	return 0;
}
