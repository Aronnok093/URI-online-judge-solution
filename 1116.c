#include<stdio.h>
int main(){
    double result;
    int t,i,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d%d",&x,&y);
        result=(x*1.0)/y;
        if(y!=0){
            printf("%.1lf\n",result);
        }
        else{
            printf("divisao impossivel\n");
        }
    }
    return 0;
}
