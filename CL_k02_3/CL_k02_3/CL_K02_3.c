#include<stdio.h>

void main(void){
	int pencil;
	printf("���M�̖{������͂��Ă�������:");
	scanf("%d",&pencil);
	if (pencil<=0){
		printf("�G���[:�������܂���\n");
	}else{
	  switch(pencil % 10){
	  case 0:case 1:case 6:case 8:
		 printf("����҂̂�����%d�ۂ�ł�\n",pencil);
		 break;
	  case 3:
         printf("����҂̂�����%d�ڂ�ł�\n",pencil);
		 break;
	  default:
         printf("����҂̂�����%d�ق�ł�\n",pencil);
	  }
	}
}