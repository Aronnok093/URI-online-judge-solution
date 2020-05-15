#include<stdio.h>
int main(){
    int counter=0;
    double a,sum=0,avarage;
    while(1){       // odd loop
        if(counter==2)
            break;
        scanf("%lf",&a);
        if(0<=a&&a<=10){
            counter+=1;
            sum+=a;
            }
        else{
            printf("nota invalida\n");

            }
        }
        avarage=sum/2;
        printf("media = %.2lf\n",avarage);
}
