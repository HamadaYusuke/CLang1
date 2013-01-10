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
	printf("構造体data型のサイズ:%dバイト\n",size);
}