#include<stdio.h>
/*作成者:1T2 23 濱田悠輔*/
/*課題名:課題07_2*/
int strLenCmp(char s[],char k[]);
int r;
void main(void){
 char s[256];
 char k[256];
 printf("1番目の文字列を入力してください:");
 scanf("%s",s);
 printf("2番目の文字列を入力してください:");
 scanf("%s",k);
 r = strLenCmp(s,k);
 

 
 if(r==0){
  printf("1番目と2番目の文字列は同じ長さです");
 }else if(r>0){
  printf("1番目の文字列の方が長いです");
 }else if(r<0){
  printf("2番目の文字列の方が長いです");
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