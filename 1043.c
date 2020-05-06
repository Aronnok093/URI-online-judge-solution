#include<stdio.h>
void main(){
	float A,B,C,x;
	scanf("%f%f%f",&A,&B,&C);
	x=(A+B)>C&&(B+C)>A&&(A+C)>B?1:0;
	if(x==1.0){
		printf("Perimetro = %.1f\n",A+B+C);
	}
	else
		printf("Area = %.1f\n",((A+B)/2)*C);
}
