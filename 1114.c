#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b=2002;
    x:
    scanf("%d",&a);
    if(a==b){
        printf("Acesso Permitido\n");
        exit(0);
        }
    else
        {
        printf("Senha Invalida\n");
         goto x;
        }
    return 0;
}
