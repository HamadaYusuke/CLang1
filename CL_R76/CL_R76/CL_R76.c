#include<stdio.h>
int *sum(int x,int y);
void func(int a);

void main(void){
	int *s;
	s=sum(3,5);
	func(100);
	printf("‡Œv=%d\n",*s);
}
int *sum(int x,int y){
	int z;
	z = x + y;
	return &z;
}
void func(int a){
	int b;
	b = a + 1;
}