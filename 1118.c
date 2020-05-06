#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b=2002;
    x:
    scanf("%d",&a);
    if(a==b){
        printf("Senha Invalida\n")
        exit(0);
        }
    else
        {
        printf("Acesso Permitido\n")
        goto x;
        }
    return 0;
}
