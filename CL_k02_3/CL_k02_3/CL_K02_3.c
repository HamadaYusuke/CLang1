#include<stdio.h>

void main(void){
	int pencil;
	printf("鉛筆の本数を入力してください:");
	scanf("%d",&pencil);
	if (pencil<=0){
		printf("エラー:数えられません\n");
	}else{
	  switch(pencil % 10){
	  case 0:case 1:case 6:case 8:
		 printf("えんぴつのかずは%dぽんです\n",pencil);
		 break;
	  case 3:
         printf("えんぴつのかずは%dぼんです\n",pencil);
		 break;
	  default:
         printf("えんぴつのかずは%dほんです\n",pencil);
	  }
	}
}