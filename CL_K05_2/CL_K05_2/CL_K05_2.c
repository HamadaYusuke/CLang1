#include<stdio.h>

struct data{
	char name[256];
	double height;
	double weight;
};

void main(void){
	struct data sdAry[4]={{"���f�W�q",175.5,73.2},
	                      {"���n�}�q",153.3,49.5},
         	              {"��葾�Y",167.7,80.3},
	                      {"���Ԏq",162.0,47.9}};
int i;
   printf("���茋��:\n");
   for(i=0;i<4;i++){
	   printf("%-10s ",sdAry[i].name);
	   printf("%fcm ",sdAry[i].height);
	   printf("%fkg\n",sdAry[i].weight);
   }
}