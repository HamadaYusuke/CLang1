#include<stdio.h>

void main(void){
	char w[5][10]={"book",
		           "pen",
				   "desk",
				   "computer",
				   "chair"};
	int i;
	printf("�z��w:\n");
	for(i=0;i<5;i += 1){
		printf("%s\n",w[i]);
	}
}