#include<stdio.h>

void main(void){
	int i;
	printf("while ��������\n");
	i = 3;
	while(i <= 1){
		printf("�J��Ԃ���\n");
		i = i + 1;
	}
	printf("while �����܂�\n");
	printf("----------------------------\n");
	printf("do-while ��������\n");
	i = 3;
	do{
		printf("�J��Ԃ���\n");
		i = i + 1;
	}while(i <= 1);
	printf("do-while �����܂�\n");
}