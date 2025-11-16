//to find addtion of matrix
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2;
	printf("enter order of matrix a:");
	scanf("%d%d",&r1,&c1);
	printf("enter order of matix b:");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		printf("enter matrix a elements:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
		}
		printf("enter matrix b elements:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			scanf("%d",&b[i][j]);
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			c[i][j]=a[i][j]+a[i][j];
		}
		printf("addition of matrix a and b is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			printf("%d\t",c[i][j]);
			printf("\n");
		}
	}
	else
	printf("matrix is addition is not possible:");
	return 0;
}
