//to check the given character is alphabet or not
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a charater:");
	scanf("%d",&ch);
	if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
	{
		printf("ALPHABET\n",ch);
	}
	else
	printf("NOT ALPHABET\n",ch);
	return 0;
}
