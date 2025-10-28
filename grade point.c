#include<stdio.h>
int main()
{
	int per;
	printf("enter a percentage:");
	scanf("%d",&per);
	if (per>=90)
	printf("grade o\n");
	else if(per<90&&per>=80)
	printf("grade s\n");
	else if(per<80&&per>=70)
	printf("grade a\n");
	else if(per<70&&per>=60)
	printf("grade b\n");
	else if(per<60&&per>=50);
	printf("grade c\n");
	else if(per<50&&per>=40);
	printf("grade d\n");
	else
	printf("fail\n");
	return 0;
}


