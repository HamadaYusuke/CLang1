#include<stdio.h>
void kansuu(void);

void main(void){
	int a; /*この変数はmain()の中でしかつかえない*/
	 
	a=100;
	kansuu(a);

}

void kansuu(int a){
	int b; /*この変数はkansuu()の書かでしかつかえない*/

    b=200;
	a=a*20;
	printf("aの値は%dです\n",a);
	printf("bの値は%dです\n",b);
}