#include<stdio.h>
int main(){
    char name[20];
    float salary,sell;
    scanf("%s",&name);
    scanf("%f%f",&salary,&sell);
    printf("TOTAL = R$ %.2f\n",salary+sell*.15);
    return 0;
}
