#include<stdio.h>
int fact1(int x);

void main(void){
	int n,fibonacci;
	printf("フィボナッチ数列の何番目の値を求めますか:");
	scanf("%d",&n);
	while(n<0){
		printf("");
		printf("フィボナッチ数列の何番目の値を求めますか:");
		scanf("%d",n);
	}
	fibonacci=fact1(n);
	printf("フィボナッチ配列F[%d]の値は%dです",n,fibonacci);
}
int fact(int x){
	int ans=1,i;