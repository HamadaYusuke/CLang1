#include<stdio.h>
#include<stdlib.h>

void main(void){
	int *buf;
	int number,i,sum=0;

	printf("���̓f�[�^�͉��ł���:");
	scanf("%d",&number);
	i=sizeof(int)*number;
    buf=(int*)malloc(i);

	for(i=0;i<number;i++){
       printf("%d�ڂ̃f�[�^:",i+1);
	   scanf("%d",&buf[i]);
}
	for(i=0;i<number;i++){
	   sum+=buf[i];
	   }
	   printf("���̓f�[�^�̍��v��%d�ł�\n",sum);
}