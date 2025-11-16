//to print prime number or not
#include<stdio.h>
int main()
{
	int n,i=2,counter=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
	    {
		  counter=1;
		  break;
    	}
    	i++;
    }
    if(counter==0)
    printf("given number is prime\n");
    else
    printf("given number is not a prime\n");
    return 0;
}
	
