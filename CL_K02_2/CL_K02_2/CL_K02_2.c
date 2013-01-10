#include<stdio.h>
/*作成者:1T2 23 濱田悠輔*/
/*課題名:02_2*/
void main(void){
	int a,b,syou,amari;
    printf("aの値を入力してください:");
	scanf("%d",&a);
	printf("bの値を入力してください:");
	scanf("%d",&b);
	if (b == 0){
		printf("エラー:0で割ることはできません。\n");
	}else{
	syou = a / b;
    amari = a % b;
	printf("%dを%dで割った結果は%dです\n",a,b,syou);
	printf("%dを%dで割った余りは%dです\n",a,b,amari);
	}
}