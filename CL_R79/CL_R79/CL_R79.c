#include<stdio.h>
int fact1(int x);

void main(void){
	int n,kei;
	printf("階乗を求めたい値を入力してください:");
	scanf("%d",&n);
	while(n<0){
    printf("0以sh上の値を入力してください:");
	printf("階乗を求めたい値を入力:");
	scanf("%d",&n);
	}

	k=fact1(n);
	printf("%dの階乗で%dです\n",n,k);
}
int fact1(int x){
	int ans =1,i;
	if(x>=2){
		for(i=2,i<=x;i++){
		ans=ans*i;
		}
	}
	return ans;	
}