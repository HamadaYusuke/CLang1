#include<stdio.h>

struct data{
	int scoreE;
	int scoreM;
	int scoreJ;
	char name[256];
};

void main(void){
	int size;
	size=sizeof(struct data);
	printf("�\����data�^�̃T�C�Y:%d�o�C�g\n",size);
}