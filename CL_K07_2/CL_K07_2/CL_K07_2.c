#include<stdio.h>
/*�쐬��:1T2 23 �_�c�I��*/
/*�ۑ薼:�ۑ�07_2*/
int strLenCmp(char s[],char k[]);
int r;
void main(void){
 char s[256];
 char k[256];
 printf("1�Ԗڂ̕��������͂��Ă�������:");
 scanf("%s",s);
 printf("2�Ԗڂ̕��������͂��Ă�������:");
 scanf("%s",k);
 r = strLenCmp(s,k);
 

 
 if(r==0){
  printf("1�Ԗڂ�2�Ԗڂ̕�����͓��������ł�");
 }else if(r>0){
  printf("1�Ԗڂ̕�����̕��������ł�");
 }else if(r<0){
  printf("2�Ԗڂ̕�����̕��������ł�");
 }
 printf("\n");
}


int strLenCmp(char s[],char k[]){
 int i,j;
 for(i = 0; s[i] != '\0';i ++){
 }
  for(j = 0; k[j] != '\0';j ++){
  }
 if (i == j){
  r = 0;
 }
 if(i > j){
  r = 1;
 }
 if(i < j){
  r = -1;
 }

  return r;
}