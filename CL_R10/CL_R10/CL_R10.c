#include<stdio.h>

void main(void){
	int x;
    printf("整数を入力してください:");
	scanf("%d",&x);
	printf("x = %d\n", x);
	if(x > 100){
		printf("100より大きい値が入力されました\n");
	} else{
		printf("100以下の値が入力されました\n");
	}
}
