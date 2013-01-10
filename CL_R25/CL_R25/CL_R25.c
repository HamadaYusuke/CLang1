#include<stdio.h>

void main(void){
	int a[10]={100,101,102,103,104,
	           105,106,107,108,109};
    int b[10],i;
    printf("配列の複写　ここから\n");
	for(i=0;i<10;i=i+1){
		b[i]=a[i];
		printf("b[%d]=%d\n",i,b[i]);
	}
    printf("配列の複写　ここまで\n");
}