#include<stdio.h>
void dispSd(struct data sd);
struct data{
	int score[3];
	char name[256];
};

void main(void){
	struct data sdAry[4],sd;
	int i,j;

	for(i=0;i<4;i++){
		printf("氏名を入力してください:");
		scanf("%s",sd.name);
		for(j=0;j<3;j++){
			printf("%d番目の科目の点数を入力してください:",j+1);
			scanf("%d",&(sd.score[j]));
		}
		sdAry[i]=sd;
	}
	printf("\n成績:\n");
	for(i=0;i<4;i++){
		dispSd(sdAry[i]);
	}
}

void dispSd(struct data sd){
	int i;
	printf("%s  ",sd.name);
	for(i=0;i<3;i++){
		printf("%d番目の科目%d点",i+1,sd.score[i]);
	}
    printf("\n");
}

