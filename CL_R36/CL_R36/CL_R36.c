#include<stdio.h>

struct birth{
	int age;
	char name[256];
	char blood[256];
};

void main(void){
	struct birth dyAry[5]={{19,"���Y","A"},
	                       {18,"�Ԏq","B"},
	                       {21,"��Y","AB"},
         	               {17,"���Y","0"},
	                       {15,"�O�Y","A"}};
	struct birth work;
	int i,j;
	/*�N��̏����ɐ���*/
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j ++){
			if(dyAry[i].age>dyAry[j].age){
				work=dyAry[j];
				dyAry[j]=dyAry[i];
				dyAry[i]=work;
			}
		}
	}
	/*�\���̔z������Ԃɏo��*/
	for(i=0;i<5;i ++){
		printf("%s����%d��%s�^\n",dyAry[i].name,
			dyAry[i].age,dyAry[i].blood);
	}
}