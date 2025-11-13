//to check given number is leap year or not
#include<stdio.h>
int main()
{
	int y;
	printf("enter a year:");
	scanf("%d",&y);
	if(y%4==0)
	{
	  if(y%100==0)
	 {
	  if(y%400==0)
	  printf("%d is a leap year\n",y);
	  else
	  printf("%d is non leap year\n",y);
   }
   }
	return 0;
}
