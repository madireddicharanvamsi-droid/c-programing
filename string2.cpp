//wacp to find frequency alphabet present in the string
#include<stdio.h>
int main()
{
	char s[100];
	int i,count;
	puts("enter a string:");
	gets;
	for(i=0;s[i]!='\o';i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
			count++;
		}
	}
	return 0;
}

