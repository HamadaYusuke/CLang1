#include<stdio.h>
void appendStr(char *ps);

void main(void){
	char s[256]="C ";
	appendStr(s);
	printf("������:%s\n",s);
}

void appendStr(char *ps){
    char t[256];
	int i,j;
	printf("���������͂��Ă�������:");
	scanf("%s",t);
	for(i=0;ps[i]!='\0';i++){
	}
	for(j=0;i+j+1<256 && t[j]!='\0';j++){
		ps[i+j]=t[j];
	}
	ps[i+j]='\0';
}
