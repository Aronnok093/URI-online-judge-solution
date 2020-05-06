//Game Time with Minutes
#include<stdio.h>
void main(){

int h1,m1,h2,m2,extram,h,m;
scanf("%d%d%d%d",&h1,&m1,&h2,&m2);

if(h1<h2){

    h=h2-h1-1;
    m1=60-m1;
    m=m1+m2;
    if(m>=60){
           extram=m;
        m=m/60;
        h=h+m;
        extram=extram%60;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,extram);

    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }

}

else if(h1==h2 ){
        if(m1==m2){
           h=24,m=0;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }
        else {
                h=24-1;
           m1=60-m1;
           m=m1+m2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }

}
else if(h1>h2){
    h1=12-h1-1;
    h=h1+h2;

    m1=60-m1;
    m=m1+m2;
    if(m>=60){
           extram=m;
        m=m/60;
        h=h+m;
        extram=extram%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,extram);
}
else{
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
}

}
}

