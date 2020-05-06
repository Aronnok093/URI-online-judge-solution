#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main(){
    float A,B,C;
    scanf("%f%f%f",&A,&B,&C);

    printf("TRIANGULO: %.3f\n",(1.0/2)*A*C);

    printf("CIRCULO: %.3f\n",pi*pow(C,2) );

    printf("TRAPEZIO: %.3f\n",1/2.0*(A+B)*C);

    printf("QUADRADO: %.3f\n",pow(B,2));

    printf("RETANGULO: %.3f\n",A*B);

    return 0;
}
