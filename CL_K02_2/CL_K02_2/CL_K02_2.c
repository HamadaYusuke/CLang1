#include<stdio.h>
/*�쐬��:1T2 23 �_�c�I��*/
/*�ۑ薼:02_2*/
void main(void){
	int a,b,syou,amari;
    printf("a�̒l����͂��Ă�������:");
	scanf("%d",&a);
	printf("b�̒l����͂��Ă�������:");
	scanf("%d",&b);
	if (b == 0){
		printf("�G���[:0�Ŋ��邱�Ƃ͂ł��܂���B\n");
	}else{
	syou = a / b;
    amari = a % b;
	printf("%d��%d�Ŋ��������ʂ�%d�ł�\n",a,b,syou);
	printf("%d��%d�Ŋ������]���%d�ł�\n",a,b,amari);
	}
}