#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	float x,y;
	scanf("%f%f",&x,&y);
	if(0<x&&y>0)
		printf("Q1\n");
	if((0<x||x<0)&&y==0)
		printf("Eixo X\n");
	if(0>x&&y>0)
		printf("Q2\n");
	if(x==0&&(0<y||y<0))
		printf("Eixo Y\n");
	if(x<0&&y<0)
		printf("Q3\n");
	if(x>0&&y<0)
		printf("Q4\n");
	if(x==0&&y==0)
		printf("Origem");
	return 0;
}
