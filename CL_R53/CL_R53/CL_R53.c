#include<stdio.h>

void main(void){
	int x,y;
	x=123;
	y=-456;
	printf("�ϐ�x�̃A�h���X:%p�Ԓn\n",&x);
	
	printf("�ϐ�x�̒l      :%d\n",x);
	printf("--------------------------\n");
    printf("�ϐ�y�̃A�h���X:%p�Ԓn\n",&y);

	printf("�ϐ�y�̒l      :%d\n",y);
}