#include<stdio.h>
int inputValue(int *px,int *py);

void main(void){
	int x,y,r;
	r=inputValue(&x,&y);
	printf("\n");
	printf("���͂��ꂽ���l�̍��v:%d(x=%d,y=%d)\n",r,x,y);
}

int inputValue(int *px,int *py){
	printf("��������͂��Ă�������:");
	scanf("%d",px);
	printf("��������͂��Ă�������:");
	scanf("%d",py);
	return *px+*py;
}