#include<stdio.h>
void setValue(int *px, int *py);

void main(void){
	int x,y;
	x=0;
	y=0;
	printf("setValue関数の呼び出し前:x=%d,y=%d\n",x,y);
	setValue(&x,&y);
	printf("setValue関数の呼び出し後:x=%d,y=%d\n",x,y);
}

void setValue(int *px,int*py){
	*px=123;
	*py=456;
}