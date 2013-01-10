#include<stdio.h>

void main(void){
	int x,y;
	x=123;
	y=-456;
	printf("変数xのアドレス:%p番地\n",&x);
	
	printf("変数xの値      :%d\n",x);
	printf("--------------------------\n");
    printf("変数yのアドレス:%p番地\n",&y);

	printf("変数yの値      :%d\n",y);
}