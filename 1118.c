#include<stdio.h>
int main(){
    float input,sum=0,avg=0;
    int count=0;

    while(1){

        scanf("%f",&input);
        if(0.0>input||input>10.0)
            printf("nota invalida\n");
        else
        {
            count+=1;
            sum+=input;
            if(count==2){
                avg=sum/2.0;
                printf("media = %.2f\n",avg);
                printf("novo calculo (1-sim 2-nao)\n");
                while(1){
                    scanf("%f",&input);
                    if((int)input==1){
                        sum=0;
                        avg=0;
                        input=0;
                        count=0;
                        system("cls");
                        break;
                    }
                    else if((int)input==2){
                        exit(0);
                    }
                    else{
                        printf("novo calculo (1-sim 2-nao)\n");

                    }
                }
            }
        }
    }
    return 0;
}
