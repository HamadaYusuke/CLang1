#include<stdio.h>

void main(void){
	int i,j;
	printf("���̕\��\n");
	for(j=1;j<=3;j=j+1){
	  for(i=1;i<=9;i=i+1){
		  printf("%d�~%d = %2d \n",j,i,j*i);/*�J��Ԃ�����*/
	  }
	  printf("\n");
	}

}
