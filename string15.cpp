#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="Computer";
	char *result=strstr(s1,"put");
	if(result!=NULL)
	printf("Found");
	else
	printf("Not Found");
	return 0;
}
