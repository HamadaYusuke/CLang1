#include<stdio.h>
#define KAKEZAN(x,y)x*y

void main(void){
	int a,b,c;
	printf("‚Q‚Â‚Ì”’l‚ğ‹æØ‚Á‚Ä“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d %d",&a,&b);  
	c=KAKEZAN(a,b);
	printf("Š|‚¯Z%d*%d‚Ì“š‚¦‚Í%d‚Å‚·\n",a,b,c);
}