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
		printf("��������͂��Ă�������:");
		scanf("%s",sd.name);
		for(j=0;j<3;j++){
			printf("%d�Ԗڂ̉Ȗڂ̓_������͂��Ă�������:",j+1);
			scanf("%d",&(sd.score[j]));
		}
		sdAry[i]=sd;
	}
	printf("\n����:\n");
	for(i=0;i<4;i++){
		dispSd(sdAry[i]);
	}
}

void dispSd(struct data sd){
	int i;
	printf("%s  ",sd.name);
	for(i=0;i<3;i++){
		printf("%d�Ԗڂ̉Ȗ�%d�_",i+1,sd.score[i]);
	}
    printf("\n");
}

