#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main(){
    int R;
    scanf("%d",&R);
    printf("VOLUME = %.3f\n",(4.0/3)*pi*pow((float)R,3));
    return 0;
}
