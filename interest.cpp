// write a c program to find simple and compunds interest
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci,n;
	printf("enter principle amount:");
	scanf("%f",&p);
	printf("enter time period:");
	scanf("%f",&t);
	printf("enter rate of interest");
	scanf("%f",&r);
	printf("enter n value:");
	scanf("%f",&n);
	si=(p*t*r)/100;
	ci=
	printf("simple interst=%.2f\n",si);
	printf("compound interst=%.2f\n",ci);
	return 0;
}
