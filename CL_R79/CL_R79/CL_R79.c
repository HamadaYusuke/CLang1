#include<stdio.h>
int fact1(int x);

void main(void){
	int n,kei;
	printf("ŠKæ‚ğ‹‚ß‚½‚¢’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&n);
	while(n<0){
    printf("0ˆÈshã‚Ì’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	printf("ŠKæ‚ğ‹‚ß‚½‚¢’l‚ğ“ü—Í:");
	scanf("%d",&n);
	}

	k=fact1(n);
	printf("%d‚ÌŠKæ‚Å%d‚Å‚·\n",n,k);
}
int fact1(int x){
	int ans =1,i;
	if(x>=2){
		for(i=2,i<=x;i++){
		ans=ans*i;
		}
	}
	return ans;	
}