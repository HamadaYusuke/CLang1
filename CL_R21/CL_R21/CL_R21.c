#include<stdio.h>

void main(void){
	int i;
	int a[10]={100,101,102,103,104,
		       105,106,107,108,109};
	printf("�z��̒l��\���@��������\n");
	for(i=0;i<10;i=i+1){
		printf("a[%d]=%d\n",i,a[i]);
	}
}