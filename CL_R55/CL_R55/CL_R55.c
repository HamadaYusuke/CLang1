#include<stdio.h>

	struct data{
		int scoreE;
		int scoreM;
		int scoreJ;
		char name[256];
	};

	void main(void){
		struct data sdAry[4]={{75,53,67,"岩崎デジ太"},
		                     {77,43,59,"岩崎ハマ子"},
		                     {64,62,73,"岩崎太郎"},
		                     {86,87,81,"岩崎花子"}};
		
		struct data *psd;
		int i;
		psd=sdAry;
		printf("成績:\n");
		for(i=0;i<4; i++){
			printf("%-10s  ",psd->name);
			printf("英語%d点、",psd->scoreE);
			printf("数学%d点、",psd->scoreM);
			printf("国語%d点\n",psd->scoreJ);
			psd++;
		}
	}