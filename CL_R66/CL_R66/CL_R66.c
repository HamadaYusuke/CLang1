#include<stdio.h>
#include<stdlib.h>

void main(void){
	int *buf;
	int number,i,sum=0;

	printf("入力データは何個ですか:");
	scanf("%d",&number);
	i=sizeof(int)*number;
    buf=(int*)malloc(i);

	for(i=0;i<number;i++){
       printf("%d個目のデータ:",i+1);
	   scanf("%d",&buf[i]);
}
	for(i=0;i<number;i++){
	   sum+=buf[i];
	   }
	   printf("入力データの合計は%dです\n",sum);
}