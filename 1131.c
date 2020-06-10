#include<stdio.h>
int main(){
    int a,b,t,count=0,count_d=0,inter=0,gremio=0;
    while(1){
        x:
        count++;
        scanf("%d%d",&a,&b);
        if(a==b){
            count_d++;
        }
        if(a>b){
            inter++;
        }
        else{
            gremio++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&t);
        if(t==2){
            printf("%d grenais\n",count);
            printf("Inter:%d\n",inter);
            printf("Gremio:%d\n",gremio);
            printf("Empates:%d\n",count_d);
            if(inter>gremio){
                printf("Inter venceu mais\n");
                }
            else{
                printf("Gremio venceu mais\n");
                }
            if(inter==gremio){
                printf("Não houve vencedor\n");
                }

            break;

            }
        else if (t==1){
            goto x;
        }
    }
return 0;
}
