#include<stdio.h>
void kansuu(void);

void main(void){
	int a; /*���̕ϐ���main()�̒��ł��������Ȃ�*/
	 
	a=100;
	kansuu(a);

}

void kansuu(int a){
	int b; /*���̕ϐ���kansuu()�̏����ł��������Ȃ�*/

    b=200;
	a=a*20;
	printf("a�̒l��%d�ł�\n",a);
	printf("b�̒l��%d�ł�\n",b);
}