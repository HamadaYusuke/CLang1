#include<stdio.h>

void factorial(int n){
	int i,r;
	r=1;
	for(i=1;i<=n;i++){
		r=r*i;
	}
	printf("%d�̊K���%d�ł�\n",n,r);
}

void main(void){
	int n;
	printf("��������͂��Ă�������:");
	scanf("%d",&n);
	factorial(n);
}