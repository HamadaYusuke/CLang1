#include<stdio.h>

void factorial(int n){
	int i,r;
	r=1;
	for(i=1;i<=n;i++){
		r=r*i;
	}
	printf("%dの階乗は%dです\n",n,r);
}

void main(void){
	int n;
	printf("整数を入力してください:");
	scanf("%d",&n);
	factorial(n);
}