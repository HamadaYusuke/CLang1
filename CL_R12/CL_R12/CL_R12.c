#include <stdio.h>

void main(void) {
	int age;
	printf("年齢を入力してください:");
	scanf("%d",&age);
	if (age >= 10 && age >= 20) {
		printf("あなたは10代ですね!"); 
	} else {
		printf("あなたは10代ではありませんね。"); 

	}
}