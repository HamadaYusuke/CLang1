#include<stdio.h>

void main(void){
	int pencil;
	printf("‰”•M‚Ì–{”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&pencil);
	if (pencil<=0){
		printf("ƒGƒ‰[:”‚¦‚ç‚ê‚Ü‚¹‚ñ\n");
	}else{
	  switch(pencil % 10){
	  case 0:case 1:case 6:case 8:
		 printf("‚¦‚ñ‚Ò‚Â‚Ì‚©‚¸‚Í%d‚Û‚ñ‚Å‚·\n",pencil);
		 break;
	  case 3:
         printf("‚¦‚ñ‚Ò‚Â‚Ì‚©‚¸‚Í%d‚Ú‚ñ‚Å‚·\n",pencil);
		 break;
	  default:
         printf("‚¦‚ñ‚Ò‚Â‚Ì‚©‚¸‚Í%d‚Ù‚ñ‚Å‚·\n",pencil);
	  }
	}
}