#include<stdio.h>
int fact1(int x);

void main(void){
	int n,fibonacci;
	printf("�t�B�{�i�b�`����̉��Ԗڂ̒l�����߂܂���:");
	scanf("%d",&n);
	while(n<0){
		printf("");
		printf("�t�B�{�i�b�`����̉��Ԗڂ̒l�����߂܂���:");
		scanf("%d",n);
	}
	fibonacci=fact1(n);
	printf("�t�B�{�i�b�`�z��F[%d]�̒l��%d�ł�",n,fibonacci);
}
int fact(int x){
	int ans=1,i;