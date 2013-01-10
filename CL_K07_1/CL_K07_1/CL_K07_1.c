#include<stdio.h>
/*作成者:1T2 23 濱田悠輔*/
/*課題名:課題07_2*/
int inputValue10(int x[]);

void main(void){
	int x[10],i,r;
	r=inputValue10(x);
	printf("配列の値:");
	for(i=0;i<10;i++){
		printf("%d,",x[i]);
	}
	printf("\n");
	printf("配列に入力された値の合計は%dです\n",r);
}

int inputValue10(int x[]){
	int i,sum;
	sum=0;
	for(i=0;i<10;i++){
		printf("%d番目の要素の値を入力してください:",i+1);
        scanf("%d",&x[i]);
		sum+=x[i];
	}
	return sum;
}