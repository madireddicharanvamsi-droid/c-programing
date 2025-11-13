#include<stdio.h>
int main()
{
	char s[30];
	int i,lower=0,upper=0,digit=0,sc;
	puts("enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	  if(s[i]>='a'&&s[i]<='z')
	  lower++;
	  else if (s[i]>='A'&&s[i]<='Z')
	  upper++;
	  else if (s[i]>='0'&&s[i]<='9')
	  digit++;
	  else
	  sc++;
    }
    printf("lower case is:%d\n",lower);
    printf("upper case is:%d\n",upper);
    printf("digit is:%d\n",digit);
    printf("sc is:%d\n",sc);
    return 0;
}

