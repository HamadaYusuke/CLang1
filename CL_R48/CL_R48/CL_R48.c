#include<stdio.h>
#define KAKEZAN(x,y)x*y

void main(void){
	int a,b,c;
	printf("２つの数値を区切って入力してください:");
	scanf("%d %d",&a,&b);  
	c=KAKEZAN(a,b);
	printf("掛け算%d*%dの答えは%dです\n",a,b,c);
}