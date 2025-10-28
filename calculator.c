//to make a calculator using switch case
#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter operator");
	scanf("%c",&op);
	printf("enter a two number:");
	scanf("%d%d",&a,&b);

	switch(op)
  {
	case '+':printf("%d+%d=%d\n",a,b,a+b);
	         break;
	case'-':printf("%d-%d=%d\n",a,b,a-b);
	         break;
	case'*':printf("%d*%d=%d\n",a,b,a*b);
	        break;
	case'/':if(b!=0)
	    	printf("%d/%d=%d",a,b,a/b);
	    	else
	    	printf("division is not possible");
	    	break;
	case'%':if(b!=0)
			printf("%d%%d=%d",a,b,a%b);
			else
			printf("modular division is not possible");
			break;
     default:printf("invalid operator");
 }
	return 0;				          
}
