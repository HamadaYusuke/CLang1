#include<stdio.h>

struct data{
	char name[256];
	double height;
	double weight;
};	

void main(void){
	struct data sd={"���f�W��",175.5,73.2};
	printf("���茋��:\n");
    printf("%s  ",sd.name);
	printf("%fcm ",sd.height);
	printf("%fkg\n",sd.weight);
}