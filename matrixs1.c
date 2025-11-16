#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],j,i,n1,n2,n3,n4;
	printf("enter the number of row and number of columns:");
	scanf("%d%d",&n1,&n2);
	printf("enter the first matrix elements:");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the number of rows and columns:");
	scanf("%d%d",&n3,&n4);
	printf("\nenter the second matrix elements:");
	for(i=0;i<n3;i++){
		for(j=0;j<n4;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
	{
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nsum matrix is:");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
			printf("\n");
		}
	}


	}
    }
    	return 0;
}
