#include<stdio.h>
int main(){
	int N,integer,c=0,r=0,s=0,i;
	char str[2];
	scanf("%d",&N);
	for(i = 0;i<N;i++){
		scanf("%d%s",&integer,&str);
		if(str[0]=='C')
			c=c+integer;
		else if(str[0]=='R')
			r=r+integer;
		else if(str[0]=='S')
			s=s+integer;
	}
	printf("Total: %d cobaias\n",c+r+s);
	printf("Total de coelhos: %d\n",c);
	printf("Total de ratos: %d\n",r);
	printf("Total de sapos: %d\n",s);
	printf("Percentual de coelhos: %.2f %%\n",(c*1.0/(c+r+s))*100.0);
	printf("Percentual de ratos: %.2f %%\n",(r*1.0/(c+r+s))*100.0);
	printf("Percentual de sapos: %.2f %%\n",(s*1.0/(c+r+s))*100.0);
	return 0;
	
}
