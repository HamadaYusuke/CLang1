#include<stdio.h>

struct birth{
	int age;
	char name[256];
	char blood[256];
};

void main(void){
	struct birth dyAry[3];
	int i;
	for(i=0;i<3;i++){
    printf("���O�A�N��A���t�^�����:");
	scanf("%s %d %s",dyAry[i].name,
		            &dyAry[i].age,dyAry[i].blood);
	}
	for(i=0;i<3;i++){
		printf("%s�����%d��%s�^\n",dyAry[i].name,
			                        dyAry[i].age,dyAry[i].blood);
	}
}