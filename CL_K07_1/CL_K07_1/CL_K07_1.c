#include<stdio.h>
/*�쐬��:1T2 23 �_�c�I��*/
/*�ۑ薼:�ۑ�07_2*/
int inputValue10(int x[]);

void main(void){
	int x[10],i,r;
	r=inputValue10(x);
	printf("�z��̒l:");
	for(i=0;i<10;i++){
		printf("%d,",x[i]);
	}
	printf("\n");
	printf("�z��ɓ��͂��ꂽ�l�̍��v��%d�ł�\n",r);
}

int inputValue10(int x[]){
	int i,sum;
	sum=0;
	for(i=0;i<10;i++){
		printf("%d�Ԗڂ̗v�f�̒l����͂��Ă�������:",i+1);
        scanf("%d",&x[i]);
		sum+=x[i];
	}
	return sum;
}