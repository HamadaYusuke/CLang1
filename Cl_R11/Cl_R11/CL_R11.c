#include <stdio.h>

void main(void) {
 	int score;
    printf("�_������͂��Ă�������:");
    scanf ("%d", &score);
	if (score >= 80) {
       printf ("���т�A�ł��B\n");
	} else if (score >= 70) {
       printf ("���т�B�ł��B\n");
	} else if (score >= 60) {
	   printf ("���т�C�ł��B\n");
	} else {
	   printf ("���т�D�ł��B\n");
	}
