#include<stdio.h>
void main(void){
	int i,j;
    j=1;
    for (i=1;i<=10;i=i+1){
		j=j*5;
	}
    printf("%dの%d乗は%dです。\n",5,10,j);
}