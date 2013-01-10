#include<stdio.h>

struct data{
	char name[256];
	double height;
	double weight;
};	

void main(void){
	struct data sd={"ŠâèƒfƒW‘¾",175.5,73.2};
	printf("‘ª’èŒ‹‰Ê:\n");
    printf("%s  ",sd.name);
	printf("%fcm ",sd.height);
	printf("%fkg\n",sd.weight);
}