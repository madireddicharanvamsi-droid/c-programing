#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],ch;
	int i,j,l;
	puts("enter your name:");
	gets(s);
	puts("before reverse name is");
	puts(s);
	strlen(s);
	for(i=0,j=l-1;i>j;i++,j--)
	{
		ch=s[i];
		s[i]=s[j];
		s[j]=ch;
	}
	puts("after reverse name is");
	puts(s);
	return 0;
}
