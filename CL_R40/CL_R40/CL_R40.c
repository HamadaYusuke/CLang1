#include<stdio.h>

int factorial(int n){
	int i,r;
	r=1;
	for(i=1;i<=n;i++){
		r=r*i;
	}
	return r;
}

void main(void){
	int n,r;
	printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&n);
	r=factorial(n);
	printf("%d‚ÌŠKæ‚Í%d‚Å‚·\n",n,r);

}