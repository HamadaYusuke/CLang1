#include<stdio.h>
#include<stdlib.h>

 int main(void){
	 FILE *fp;
	 char s[1024];
	fp=fopen("list.dat","r");
	if (fp ==NULL){
		printf("�G���[:�t�@�C��list.dat�����݂��܂���B\n");
		exit(1);
	}
	while(fgets(s,1024,fp)!=NULL){
		 printf("%s",s);

    }
	fclose(fp);
	return 0;
}
