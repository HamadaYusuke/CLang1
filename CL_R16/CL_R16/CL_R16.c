#include<stdio.h>

void main(void){
	int i;
	printf("while ここから\n");
	i = 3;
	while(i <= 1){
		printf("繰り返し中\n");
		i = i + 1;
	}
	printf("while ここまで\n");
	printf("----------------------------\n");
	printf("do-while ここから\n");
	i = 3;
	do{
		printf("繰り返し中\n");
		i = i + 1;
	}while(i <= 1);
	printf("do-while ここまで\n");
}