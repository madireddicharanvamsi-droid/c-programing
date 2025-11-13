//to check the person is eligible to vote or not
#include<stdio.h>
int main()
{
	int age;
	printf("enter age of person:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("YES\n",age);
	}
	else
	printf("NO\n",age);
	return 0;
}
