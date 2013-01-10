#include<stdio.h>

void main(void){
	int i;
	printf("演算子と計算式が孤立\n");
	i=0;
	printf("演算前:i=%d\n",i);
	++ i;
	printf("前置演算子++iを実行:i = %d\n",i);
	i ++;
	printf("後置演算子i++を実行:i = %d\n",i);
	printf("\n演算子と計算式が一緒\n");
	i=0;
	printf("計算前:変数i=%d\n",i);
	printf("前置演算子++iを実行:i=%d\n",++ i);
	printf("後置演算子i++を実行:i=%d\n",i ++);
}