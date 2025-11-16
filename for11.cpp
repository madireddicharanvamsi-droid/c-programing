// fibbnoicc series
#include<stdio.h>
int main()
{
	int i=1,n,f1=0,f2=1,f3;
	printf("enter a number:");
	scanf("%d",&n);
	for(i;n>=f1;i++)
	{
		if(n==f1)
       {
	  printf("YES");
	  return 0;
       }
       {
	    f3=f1+f2;
	    f1=f2;
	     f2=f3;
        }
    
	}    
  printf("NO");
  return 0;
}
