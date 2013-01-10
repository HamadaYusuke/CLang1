#include<stdio.h>

void main(void){
	int*y[3];
	int a[3]={1,2,3};
	int b[3]={2,4,6};
	int c[3]={3,6,9};
	int i,j;
	y[0]=a;
	y[1]=b;
	y[2]=c;
	printf("”z—ñy:\n");
	for(i=0;i<3;j++){
		for(j=0;j<3;j++){
		   printf("%d ",*(y[i]+j));
		   /* printf("%d ",y[i][j]);*/
	}
	printf("\n");
	}
}