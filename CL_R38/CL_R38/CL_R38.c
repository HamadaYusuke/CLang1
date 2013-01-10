#include<stdio.h>

int factoria110(){
	int i,r;
	r=1;
	for(i=1;i<=10;i++){
		r=r*i;
	}
	return r;
}

void main(void){
	int r;
	r=factoria110();
	printf("10‚ÌŠKæ‚Í%d‚Å‚·\n",r);
}