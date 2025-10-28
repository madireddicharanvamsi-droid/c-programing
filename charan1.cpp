//write a c program to demontrate logical operations
#include<stdio.h>
int main()
{
	int a=20,b=40,c=20,d;
	d=(a<b)||(a==c);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	return 0;
}
