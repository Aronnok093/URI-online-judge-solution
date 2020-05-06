#include<stdio.h>
int main(){
	int i,j,n=7,t=5;
	for(i=1;i<=9;i=i+2){
		for(j=n;j>=t;j--)
			printf("I=%d J=%d\n",i,j);
		n=t+4;
		t=n-2;
	}
	return 0;
}
