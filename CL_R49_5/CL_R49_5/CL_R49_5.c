#include<stdio.h>
void kansuu(void);

void main(void){
	int a; /*‚±‚Ì•Ï”‚Ímain()‚Ì’†‚Å‚µ‚©‚Â‚©‚¦‚È‚¢*/
	 
	a=100;
	kansuu(a);

}

void kansuu(int a){
	int b; /*‚±‚Ì•Ï”‚Íkansuu()‚Ì‘‚©‚Å‚µ‚©‚Â‚©‚¦‚È‚¢*/

    b=200;
	a=a*20;
	printf("a‚Ì’l‚Í%d‚Å‚·\n",a);
	printf("b‚Ì’l‚Í%d‚Å‚·\n",b);
}