#include<stdio.h>

void main(void){
	int i;
printf("繰り返し　ここから\n");
i = 1;
	while(i <= 3){
		printf("繰り返し中\n");
		i = i + 1;
		break;
		printf("この命令は実行されません\n");
	}
	printf("繰り返し　ここまで\n");
}