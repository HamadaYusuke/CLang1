#include<stdio.h>

void factorial(int n){
	int i,r;
	r=1;
	for(i=1;i<=n;i++){
		r=r*i;
	}
	printf("%d‚ÌŠKæ‚Í%d‚Å‚·\n",n,r);
}

void main(void){
	int n;
	printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&n);
	factorial(n);
}