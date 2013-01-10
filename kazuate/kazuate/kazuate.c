#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gamestart(void);

void main(void){
	time_t t1,t2;

	time(&t1);
	gamestart();
	time(&t2);
	printf("‚©‚©‚Á‚½ŠÔ‚Í%.0f•b‚Å‚·\n",difftime(t2,t1));
}

void gamestart(void){
	int kazu,kotae;
    srand((unsigned int)time(NULL));
	kotae=rand()%100;
	while(1){
		printf("”‚ğ“–‚Ä‚Ä‚­‚¾‚³‚¢(0`99):");
		scanf("%d",&kazu);
		if(kazu==kotae){
	         break;
	    }else if(kazu<kotae){
		    printf("¬‚³‚¢!\n");
	    }else{
		    printf("‘å‚«‚¢\n");
		}
	}
     printf("³‰ğ!");
}