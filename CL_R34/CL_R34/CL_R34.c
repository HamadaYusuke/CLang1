#include<stdio.h>

struct birth{
	int age;
	char name[256];
	char blood[256];
};

void main(void){
	struct birth dy;
	printf("���O�����:");
	scanf("%s",dy.name);
	printf("�N��̓���:");
	scanf("%d",&dy.age);
	printf("���t�^�����:");
	scanf("%s", dy.blood);
	printf("%s�����%d��%s�^\n",dy.name,dy.age,dy.blood);
}
