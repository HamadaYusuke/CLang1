#include<stdio.h>
#include<time.h>

void main(void){
	time_t t;
	struct tm *lt;

	time(&t);
	lt=localtime(&t);
	printf("���ݎ����́A%s",asctime(lt));
}