#include<stdio.h>

void main(void){
	int i;
	printf("繰り返しここから\n");
	i = 1;
	while (i <= 8){
		printf("繰り返し%d回目\n",i);
		i = i + 1;
	}
	printf("繰り返し　ここまで\n");
}
