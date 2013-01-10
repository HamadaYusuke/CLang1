#include<stdio.h>
#include<string.h>

void main(void){
	char a[]="AppleOrangeMango",b[256];
	printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s",b);
	if(strstr(a,b) == NULL){
		printf("•¶Žš—ñ%s‚Ì’†‚É%s‚ÍŠÜ‚Ü‚ê‚Ü‚¹‚ñ\n",a,b);
	}else{	
		printf("•¶Žš—ñ%s‚Ì’†‚É%s‚ª‚Ý‚Â‚©‚è‚Ü‚µ‚½\n",a,b);
	}
}