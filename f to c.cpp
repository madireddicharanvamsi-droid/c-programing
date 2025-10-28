#include<stdio.h>;
int main()
{
	float c,f;
	printf("enter the temparature in fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("temparature in celcius:%.2fc\n",c);
	return 0;
}
