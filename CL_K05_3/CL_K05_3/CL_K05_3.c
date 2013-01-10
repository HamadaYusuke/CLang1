#include<stdio.h>

struct data{
	char name[256];
	double height;
	double weight;
};

void main(void){
	struct data sdAry[4]={{"岩崎デジ子",175.5,73.2},
	                      {"岩崎ハマ子",153.3,49.5},
         	              {"岩崎太郎",167.7,80.3},
	                      {"岩崎花子",162.0,47.9}};
	int i;
	double bmi;
   printf("測定結果:\n");
   for(i=0;i<4;i++){
	   printf("%-10s ",sdAry[i].name);
	   printf("%fcm ",sdAry[i].height);
	   printf("%fkg ",sdAry[i].weight);
       bmi=sdAry[i].weight/((sdAry[i].height/100.0)*(sdAry[i].height/100.0));
	   printf("のBMI指数は、%f\n",bmi);
   }
}