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
		int i;
		printf("成績:\n");
		for(i=0;i<4; i++){
			printf("%-10s  ",sdAry[i].name);
			printf("英語%d点",sdAry[i].scoreE);
			printf("数学%d点",sdAry[i].scoreM);
			printf("国語%d点\n",sdAry[i].scoreJ);
		}
	}