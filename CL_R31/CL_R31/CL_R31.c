#include<stdio.h>

struct data{
	int scoreE;
	int scoreM;
	int scoreJ;
	char name[256];
};

void main(void){
	struct data  sd={75,53,67,"���f�W��"};

	printf("%s  ",sd.name);
	printf("�p��%d�_�A",sd.scoreE);
    printf("���w%d�_�A",sd.scoreM);
	printf("����%d�_\n",sd.scoreJ);
}