#include<stdio.h>
/*ì¬ŽÒ:1T2 23 à_“c—I•ã*/
/*‰Û‘è–¼:‰Û‘è07_2*/
int strLenCmp(char s[],char k[]);
int r;
void main(void){
 char s[256];
 char k[256];
 printf("1”Ô–Ú‚Ì•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
 scanf("%s",s);
 printf("2”Ô–Ú‚Ì•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
 scanf("%s",k);
 r = strLenCmp(s,k);
 

 
 if(r==0){
  printf("1”Ô–Ú‚Æ2”Ô–Ú‚Ì•¶Žš—ñ‚Í“¯‚¶’·‚³‚Å‚·");
 }else if(r>0){
  printf("1”Ô–Ú‚Ì•¶Žš—ñ‚Ì•û‚ª’·‚¢‚Å‚·");
 }else if(r<0){
  printf("2”Ô–Ú‚Ì•¶Žš—ñ‚Ì•û‚ª’·‚¢‚Å‚·");
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