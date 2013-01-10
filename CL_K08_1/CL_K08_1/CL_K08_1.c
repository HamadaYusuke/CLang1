#include<stdio.h>
#include<stdlib.h>

int dispFileData(char*);

int main(void){
	char filename[256];
	printf("ファイルを入力してください:");
	scanf("%s",filename);

	dispFileData(filename);
	return 0;
}

int dispFileData(char*filename){
	FILE *fp;
	char buf[1024];
	fp=fopen(filename,"r");
	if(fp=NULL){
		printf("エラー:%sは見つかりません。\n",filename);
		exit(1);
	}
	
while(fgets(buf,1024,fp)!=NULL){
	printf("%s",buf);
 }
fclose(fp);
return 0;
}