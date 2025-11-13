#include<stdio.h>
#include<string.h>
int main()
{
     char s1[]="MARGANA";
	 char s2[]="Z";
	 int res=strcmp(s1,s2);
	 if(res==0)
	 printf("two strings are equal");
	 else if(res<0)
	 printf("%s is smaller than %s",s1,s2); 
	 else 
	 printf("%s is greater than %s",s1,s2);
	 return 0;
}
