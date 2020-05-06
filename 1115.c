#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    x:
    scanf("%d%d",&x,&y);
    if(0<x&&y>0){
    printf("primeiro\n");
    goto x;
    }
    else if(0<x&&y<0){
        printf("quarto\n");
        goto x;
    }
    else if(0>x&&y<0){
        printf("terceiro\n");
        goto x;
    }
    else if(0>x&&y>0){
    printf("segundo\n");
    goto x;
    }
    else{
        exit(0);
    }
    return 0;
}
