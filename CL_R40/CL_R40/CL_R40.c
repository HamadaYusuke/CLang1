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
	printf("整数を入力してください:");
	scanf("%d",&n);
	r=factorial(n);
	printf("%dの階乗は%dです\n",n,r);

}