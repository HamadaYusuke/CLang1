#include <stdio.h>

void main(void) {
 	int score;
    printf("点数を入力してください:");
    scanf ("%d", &score);
	if (score >= 80) {
       printf ("成績はAです。\n");
	} else if (score >= 70) {
       printf ("成績はBです。\n");
	} else if (score >= 60) {
	   printf ("成績はCです。\n");
	} else {
	   printf ("成績はDです。\n");
	}
