#include<stdio.h>

void main(void){
    int x;
	printf("整数を入力してください:");
	scanf("%d", &x);
	printf("x = %d\n", x);
    if (x >= 10) {
		printf("10以上の整数値を受け取りました。\n");
	}
}
