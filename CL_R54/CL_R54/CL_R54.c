#include<stdio.h>

void main(void){
	double x[5]={100,101,102,103,104};
	int i;
	double *px;
	px=x;
	for(i=0;i<5;i++){
		printf("x[%d]‚ÌƒAƒhƒŒƒX=%p\n",i,px);
		
		printf("x[%d]=%f\n",i,*px);
		px=px+1;

		/* printf("x[%d]=%d\n",i,x[i]); */
	}
}