//to find simple and component interst
#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,si,ci;
	printf("enter principle amount:");
	scanf("%d",&p);
	printf("enter time period:");
	scanf("%d",&t);
	printf("enter rate of interst:");
	scanf("%d",&r);
	si=p*t*r/100;
	ci=p*pow((1+r/100),t);
	printf("simple interst=%.2f\n",si);
	printf("compound interst=%.2f\n",ci);
	return 0;
}
