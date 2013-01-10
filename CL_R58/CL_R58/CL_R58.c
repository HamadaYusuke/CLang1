#include<stdio.h>
int inputValue(int *px,int *py);

void main(void){
	int x,y,r;
	r=inputValue(&x,&y);
	printf("\n");
	printf("“ü—Í‚³‚ê‚½”’l‚Ì‡Œv:%d(x=%d,y=%d)\n",r,x,y);
}

int inputValue(int *px,int *py){
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",px);
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",py);
	return *px+*py;
}