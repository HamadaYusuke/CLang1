#include<stdio.h>

struct data{
	int scoreE;
	int scoreM;
	int scoreJ;
	char name[256];
};

void main(void){
	struct data  sd={75,53,67,"岩崎デジ太"};

	printf("%s  ",sd.name);
	printf("英語%d点、",sd.scoreE);
    printf("数学%d点、",sd.scoreM);
	printf("国語%d点\n",sd.scoreJ);
}