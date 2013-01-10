#include<stdio.h>

struct birth{
	int age;
	char name[256];
	char blood[256];
};

void main(void){
	struct birth dy;
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s",dy.name);
	printf("”N—î‚Ì“ü—Í:");
	scanf("%d",&dy.age);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", dy.blood);
	printf("%s‚³‚ñ‚Í%dÎ%sŒ^\n",dy.name,dy.age,dy.blood);
}
