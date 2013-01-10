#include<stdio.h>

struct birth{
	int age;
	char name[256];
	char blood[256];
};

void main(void){
	struct birth dyAry[5]={{19,"太郎","A"},
	                       {18,"花子","B"},
	                       {21,"一郎","AB"},
         	               {17,"次郎","0"},
	                       {15,"三郎","A"}};
	struct birth work;
	int i,j;
	/*年齢の昇順に整列*/
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j ++){
			if(dyAry[i].age>dyAry[j].age){
				work=dyAry[j];
				dyAry[j]=dyAry[i];
				dyAry[i]=work;
			}
		}
	}
	/*構造体配列を順番に出力*/
	for(i=0;i<5;i ++){
		printf("%sさん%d歳%s型\n",dyAry[i].name,
			dyAry[i].age,dyAry[i].blood);
	}
}