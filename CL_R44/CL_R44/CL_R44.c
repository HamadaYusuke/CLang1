#include<stdio.h>
#include<string.h>

void main(void){
	char a[]="AppleOrangeMango",b[256];
	printf("文字を入力してください:");
	scanf("%s",b);
	if(strstr(a,b) == NULL){
		printf("文字列%sの中に%sは含まれません\n",a,b);
	}else{	
		printf("文字列%sの中に%sがみつかりました\n",a,b);
	}
}