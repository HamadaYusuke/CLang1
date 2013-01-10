#include<stdio.h>
void kansuu(int);
int a;

void main(void){
	int b1;
	a=100;
	b1=200;
	printf("1:aの値は%dです\n",a);
	printf("2:b1の値は%dです\n",b1);
	kansuu(b1);
	printf("3:aの値は%dです\n",a);
	printf("4:b1の値は%dです\n",b1);
}

void kansuu(int b2){
	int b3;
	a=a*2;
	printf("5:aの値は%dです\n",a);
	b3=b2*2;
	printf("6:b3の値は%dです\n",b3);
	a=a*2;
}