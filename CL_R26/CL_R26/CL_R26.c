#include<stdio.h>
#include<string.h>

void main(void){
	char s[256]="C����";
    char t[256];
	int i;
	printf("�z��s:%s\n",s);
	printf("�z��t�ɕ��ʒ�..\n");
	strcpy(t,s);
	
	printf("�z��t:%s\n",t);
}