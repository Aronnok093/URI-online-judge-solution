#include<stdio.h>
#include<stdlib.h>
int main(){
	int X,Y;
	T:
	scanf("%d%d",&X,&Y);
	if(X>Y){
		printf("Decrescente\n");
		goto T;
	}
	else if(X<Y)
	{
	
		printf("Crescente\n");
		goto T;
	}
	else
		exit(0);
	
	return 0;	
}
