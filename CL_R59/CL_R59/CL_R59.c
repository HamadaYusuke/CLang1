#include<stdio.h>
int inputValue3(int x[]);

void main(void){
	int x[3],i,r;
	r=inputValue3(x);
	printf("���͂��ꂽ���l�̍��v:%d\n",r);
	for (i=0;i<3;i++){
		printf("x[%d]=%d\n",i,x[i]);
	}
}

int inputValue3(int *x){
	int i,sum;
	sum=0;
	for(i=0;i<3;i++){
		printf("��������͂��Ă�������:");
		scanf("%d",x);
		sum += *x;
		x ++;
	}
    return sum;
}