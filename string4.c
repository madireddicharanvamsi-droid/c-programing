#include<stdio.h>
int main()
{
	char s[30];
	int i,lower=0,upper=0;
	puts("enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		lower++;
		else if(s[i]>='A'&&s[i]<='Z')
		upper++;
	}
	printf("lower is:%d\n",lower);
	printf("upper is:%d\n",upper);
	return 0;
}
	

