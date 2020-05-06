#include<stdio.h>
int main(){
	int start,end,duration;
	scanf("%d%d",&start,&end);
	duration=end-start;
	if(duration<0){
		duration=duration+24;
		printf("O JOGO DUROU %d HORA(S)\n",duration);
	}
	else if(duration==0){
		duration = 24;
		printf("O JOGO DUROU %d HORA(S)\n",duration);
	}
	else
		printf("O JOGO DUROU %d HORA(S)\n",duration);
		
	return 0;
}
