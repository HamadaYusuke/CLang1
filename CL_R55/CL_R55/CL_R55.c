#include<stdio.h>

	struct data{
		int scoreE;
		int scoreM;
		int scoreJ;
		char name[256];
	};

	void main(void){
		struct data sdAry[4]={{75,53,67,"���f�W��"},
		                     {77,43,59,"���n�}�q"},
		                     {64,62,73,"��葾�Y"},
		                     {86,87,81,"���Ԏq"}};
		
		struct data *psd;
		int i;
		psd=sdAry;
		printf("����:\n");
		for(i=0;i<4; i++){
			printf("%-10s  ",psd->name);
			printf("�p��%d�_�A",psd->scoreE);
			printf("���w%d�_�A",psd->scoreM);
			printf("����%d�_\n",psd->scoreJ);
			psd++;
		}
	}