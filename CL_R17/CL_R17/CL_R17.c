#include<stdio.h>

void main(void){
	int i;
	printf("繰り返し　ここから\n");
	for(i = 1; i <= 5; i = i + 1){
		printf("繰り返し%d回目\n",i);
	}
	printf("繰り返し　ここまで\n");
}