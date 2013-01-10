#include<stdio.h>

void main(void){
	int x,y,z;
    double bmi;
    x=100;
    y=10;
	z=2;
	bmi=x/(y/z)*(y/z);
	printf("%f",bmi);
}